/********************************************************************************
** Form generated from reading UI file 'addacc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACC_H
#define UI_ADDACC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addAcc
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputUrl;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputLogin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *inputPass;

    void setupUi(QDialog *addAcc)
    {
        if (addAcc->objectName().isEmpty())
            addAcc->setObjectName("addAcc");
        addAcc->resize(281, 230);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/poly.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAcc->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(addAcc);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-40, 180, 311, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy")});
        font.setPointSize(12);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);
        verticalLayoutWidget = new QWidget(addAcc);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 0, 261, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(500, 16777215));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        inputUrl = new QLineEdit(verticalLayoutWidget);
        inputUrl->setObjectName("inputUrl");

        horizontalLayout_2->addWidget(inputUrl);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(500, 16777215));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        inputLogin = new QLineEdit(verticalLayoutWidget);
        inputLogin->setObjectName("inputLogin");
        inputLogin->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(inputLogin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(500, 16777215));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        inputPass = new QLineEdit(verticalLayoutWidget);
        inputPass->setObjectName("inputPass");
        inputPass->setMaximumSize(QSize(300, 16777215));
        inputPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(inputPass);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addAcc);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addAcc, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addAcc, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addAcc);
    } // setupUi

    void retranslateUi(QDialog *addAcc)
    {
        addAcc->setWindowTitle(QCoreApplication::translate("addAcc", "Password Manager", nullptr));
        label_2->setText(QCoreApplication::translate("addAcc", "URL", nullptr));
        label->setText(QCoreApplication::translate("addAcc", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("addAcc", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addAcc: public Ui_addAcc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACC_H
