/********************************************************************************
** Form generated from reading UI file 'acclist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCLIST_H
#define UI_ACCLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AccList
{
public:
    QListWidget *listWidget;
    QPushButton *addAccBtn;
    QLineEdit *searchInput;
    QPushButton *searchButton;

    void setupUi(QDialog *AccList)
    {
        if (AccList->objectName().isEmpty())
            AccList->setObjectName("AccList");
        AccList->resize(726, 494);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/poly.png"), QSize(), QIcon::Normal, QIcon::Off);
        AccList->setWindowIcon(icon);
        listWidget = new QListWidget(AccList);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 40, 691, 441));
        addAccBtn = new QPushButton(AccList);
        addAccBtn->setObjectName("addAccBtn");
        addAccBtn->setGeometry(QRect(660, 10, 51, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy")});
        font.setPointSize(12);
        addAccBtn->setFont(font);
        searchInput = new QLineEdit(AccList);
        searchInput->setObjectName("searchInput");
        searchInput->setGeometry(QRect(20, 10, 261, 24));
        searchInput->setFont(font);
        searchButton = new QPushButton(AccList);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(290, 10, 61, 24));
        searchButton->setFont(font);

        retranslateUi(AccList);

        QMetaObject::connectSlotsByName(AccList);
    } // setupUi

    void retranslateUi(QDialog *AccList)
    {
        AccList->setWindowTitle(QCoreApplication::translate("AccList", "Password Manager", nullptr));
        addAccBtn->setText(QCoreApplication::translate("AccList", "Add", nullptr));
        searchButton->setText(QCoreApplication::translate("AccList", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccList: public Ui_AccList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCLIST_H
