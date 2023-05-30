#include "acclist.h"
#include <QListWidget>
#include <QListWidgetItem>
#include "QFile"
#include "QJsonArray"
#include "QJsonDocument"
#include "QJsonObject"
#include "addacc.h"
#include "crypt.h"
#include "customwidget.h"
#include "dbmodel.h"
#include "qaesencryption.h"
#include "ui_acclist.h"

AccList::AccList(QString key, QWidget *parent)  // передаем ключ в это окно
    : QDialog(parent), ui(new Ui::AccList) {
  ui->setupUi(this);
  this->key = key; //инициализация поля key класса AccList
  qInfo() << "key in acclist" << this->key;
  DBModel db(this->key); // передаем поле key конструктору класса DBModel
  auto json = db.json; //инициализация поля json со значением поля json класса DBModel
  for (int i = 0; i < json.size(); ++i) { // построчно пробегаемся по json файлу и добавляем записи
    this->addRow(db.getRow(i)); //добавление строки логин.пароль в наше окно
  }
}

AccList::~AccList() { delete ui; }

void AccList::addRow(const DBModel::Row row) {  // добавление записей в GUI (эту функцию вызываем в цикле выше)
  auto item = new QListWidgetItem();
  auto widget = new CustomWidget(key, this);
  widget->setText(row);
  item->setSizeHint(widget->sizeHint());
  ui->listWidget->addItem(item);
  ui->listWidget->setItemWidget(item, widget);
}

void AccList::on_addAccBtn_clicked() {  // добавление записей в json
  addAcc NewWindow; //при нажатии на кнопку открывается новое окно addacc
  NewWindow.setModal(true);
  if (NewWindow.exec() == QDialog::Accepted) {
    auto row = NewWindow.getInputValues(); // запись в переменную row введенных значений из окна addacc

    DBModel db(this->key); //инициализация поля key в dbmodel
    auto eRow = db.encrypt(row); // шифрование полученной строки логинпароль
    this->addRow(eRow); //добавление добавленной записи в окно addacc

    db.writeRowToJSON(eRow); //добавление той же зашифрованной записи в json файл
  }
}

void AccList::on_searchButton_clicked() {
  auto searchText = ui->searchInput->text(); //запись в переменную searchtext введенного пользователем текста

  auto listWidget = this->ui->listWidget; //

  for (auto i = 0; i < listWidget->count(); i++) { //пробегаемся по всем строкам в нашем listwidget, если начало url совпадает с введенным значением - выводит соответствующую строку
    auto item = listWidget->item(i);
    auto itemWidget =
        dynamic_cast<CustomWidget *>(ui->listWidget->itemWidget(item));
    if (itemWidget->getRow().url.startsWith(searchText)) { //сама проверка на совпадение url
      item->setHidden(false); //показывает совпадающую строку
    } else {
      item->setHidden(true); //скрывает несовпадающую строку
    }
  }
}

void AccList::removeItem(const QString url, const QString login) { //функция удаления записей
  QFile file(DBModel::kFileName); //создаем объект Qfile, в качестве пути указываем encoded json (kFileName)
  auto toFile = (key + "\n[]").toUtf8();
  auto encodedPin = Crypt::encrypt(toFile, key, key);

  file.open(QIODevice::ReadWrite | QIODevice::Text); //открываем файл для чтения записи
  file.remove(); //удаляем файл
  file.close();
  file.open(QIODevice::ReadWrite | QIODevice::Text); //заново создаем файл
  file.write(encodedPin); //записываем зашифрованный пин код
  file.close(); //закрываем
  DBModel db(key); //

  for (int i = 0; i < ui->listWidget->count(); i++) { //пробегаемся по всем строкам listwidget
    auto item = ui->listWidget->item(i);
    auto itemWidget =
        dynamic_cast<CustomWidget *>(ui->listWidget->itemWidget(item));

    auto row = itemWidget->getRow();

    if (row.url == url && row.login == login) { //проверка, если строка является той, что мы удаляем - то ее не записываем в json
      delete item; // удаляем строку из GUI
      continue; //продолжаем цикл, т.е. переходим сразу на 83 строку
    }
    db.writeRowToJSON(row); //запись строки в json
  }
}

void AccList::on_searchInput_cursorPositionChanged(int arg1, int arg2)
{

}

