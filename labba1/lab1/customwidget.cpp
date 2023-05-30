#include "customwidget.h"
#include "dbmodel.h"
#include "ui_customwidget.h"

//SIGNAL - когда какое-то событие произошло
//SLOT - функция, которая обрабатывает SIGNAL

CustomWidget::CustomWidget(QString pass, QWidget *parent)
    : QWidget(parent), ui(new Ui::CustomWidget) {
  ui->setupUi(this);
  this->pass = pass;
  connect(this, SIGNAL(sendRemoveItem(const QString,const QString)), parent, //привязка слота RemoveItem к сигналу sendRemoveItem
          SLOT(removeItem(const QString,const QString)));
}

CustomWidget::~CustomWidget() { delete ui; }

void CustomWidget::setText(const DBModel::Row row) { // заполнение label-ов данными
  ui->labelURL->setText(row.url);
  ui->labelLogin->setText(row.login);
  ui->labelPass->setText(row.pass);
}

void CustomWidget::on_toolButton_clicked() { // расшифрование данных при нажатии на кнопку
  //    emit ShowItem(ui->labelLogin->text());
  DBModel db(this->pass);
  DBModel::Row row = {ui->labelURL->text(), ui->labelLogin->text(),
                      ui->labelPass->text()};

  if (!CustomWidget::show) { //режим отображения текста вместо кружков
    ui->labelLogin->setEchoMode(QLineEdit::Normal);
    ui->labelPass->setEchoMode(QLineEdit::Normal);
    DBModel::Row dRow = db.decrypt(row); // если точки меняем на текст -> строку расшифровываем
    ui->labelLogin->setText(dRow.login); //изменение текста для логина

    ui->labelPass->setText(dRow.pass); //изменение текста для пароля

    CustomWidget::show = true;
  } else {
    ui->labelLogin->setEchoMode(QLineEdit::Password);
    ui->labelPass->setEchoMode(QLineEdit::Password);

    DBModel::Row eRow = db.encrypt(row); // если текст меняем на точки -> строку зашифровываем
    ui->labelLogin->setText(eRow.login); //изменение текста для логина

    ui->labelPass->setText(eRow.pass); //изменение текста для пароля

    CustomWidget::show = false;
  }
}

DBModel::Row CustomWidget::getRow() { // инициализируем объект Row, записываем в него url.login.pass
  DBModel::Row row;
  row.login = ui->labelLogin->text();
  row.url = ui->labelURL->text();
  row.pass = ui->labelPass->text();
  return row;
}

void CustomWidget::on_deleteButton_clicked() {
  emit sendRemoveItem(ui->labelURL->text(),ui->labelLogin->text()); //функция emit для испускания SIGNAL, labelURL и labelLogin попадают в слот removeitem
}
