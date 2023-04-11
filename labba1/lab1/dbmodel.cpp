#include "dbmodel.h"
#include <iostream>
#include "QDebug"
#include "QFile"
#include "QJsonArray"
#include "QJsonDocument"
#include "QJsonObject"
#include "crypt.h"

//DBModel - это вспомогательный класс, реализующий логику работы с БД

DBModel::DBModel(const QString key) {
  this->key = key; //ключ
  this->file = readFile(); //прочитанный файл
  this->json = readJson(key); //обработанные данные в формате json
}
const QString DBModel::kFileName = "encoded.json";

QJsonArray DBModel::readJson(QString key) { //функция для парсинга json, чтобы в дальнейшем удобнее было обращаться к логину паролю и тд
  auto decodedFile = Crypt::decrypt(this->file, key, key);

  auto start = decodedFile.indexOf("\n");
  auto jsonStr = decodedFile.sliced(start, decodedFile.length() - start);

  QJsonDocument d = QJsonDocument::fromJson(jsonStr.toUtf8());
  QJsonArray json = d.QJsonDocument::array();
  qDebug() << d;
  return json;
}

QByteArray DBModel::readFile() { //функция прочитывания файла
  QFile file(DBModel::kFileName);

  file.open(QIODevice::ReadWrite | QIODevice::Text);
  auto readedFile = file.readAll(); //в readedFile запишется весь прочитанный файл

  file.close();
  return readedFile;
}

void DBModel::writeFile() { //функция записи json структуры в файл
  QJsonDocument doc(this->json);
  QString strJson(doc.toJson(QJsonDocument::Compact)); //перевод json структуры в строку

  QFile file(DBModel::kFileName);
  file.open(QIODevice::ReadWrite | QIODevice::Text); // открывается файл

  auto encodedText = Crypt::encrypt((this->key + "\n" + strJson).toUtf8(), //шифруем strjson
                                    this->key, this->key);
  file.write(encodedText); // записываем шифрованный текст в файл

  file.close();
  file.open(QIODevice::ReadOnly | QIODevice::Text);
  this->file = file.readAll(); //обновляем поле file
  file.close();
}

void DBModel::writeRowToJSON(DBModel::Row row) { //функция записи строки в json файл при добавлении новой записи
  QJsonObject obj;
  obj[DBModel::fields.login] = row.login; //запись логина в json объект
  obj[DBModel::fields.pass] = row.pass; //запись пароля в json объект
  obj[DBModel::fields.url] = row.url; //запись url в json объект

  this->json.append(obj); // добавление записи в поле json (15 стр)
  this->writeFile(); //запись в файл
}

void DBModel::deleteRowFromJSON(int index) { //функция удаления строки из json.
  this->json.removeAt(index); //функция удаляет строку по ее номеру

  this->writeFile(); // запись изменений в файл
}

DBModel::Row DBModel::getRow(int index) { //функция получения строки по ее индексу
  QJsonObject jsonRow = json[index].toObject();
  DBModel::Row row = {jsonRow["url"].toString(), jsonRow["login"].toString(),
                      jsonRow["pass"].toString()};
  return row;
}

DBModel::Row DBModel::encrypt(DBModel::Row row) { // шифрование строки
  auto login = row.login;
  auto eLogin = Crypt::encrypt((login).toUtf8(), this->key, this->key);

  auto pass = row.pass;
  auto ePass = Crypt::encrypt((pass).toUtf8(), this->key, this->key);

  Row res = {row.url, eLogin, ePass};
  return res;
}

DBModel::Row DBModel::decrypt(DBModel::Row row) { //расшифровка строки
  auto login = row.login;
  auto plainLogin = Crypt::decrypt((login).toUtf8(), this->key, this->key);

  auto pass = row.pass;
  auto plainPass = Crypt::decrypt((pass).toUtf8(), this->key, this->key);

  Row res = {row.url, plainLogin, plainPass};
  return res;
}
