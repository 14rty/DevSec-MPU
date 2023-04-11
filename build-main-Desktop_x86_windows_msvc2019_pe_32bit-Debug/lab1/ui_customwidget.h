/********************************************************************************
** Form generated from reading UI file 'customwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWIDGET_H
#define UI_CUSTOMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *labelURL;
    QLineEdit *labelLogin;
    QLineEdit *labelPass;
    QToolButton *toolButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *CustomWidget)
    {
        if (CustomWidget->objectName().isEmpty())
            CustomWidget->setObjectName("CustomWidget");
        CustomWidget->resize(563, 60);
        horizontalLayout = new QHBoxLayout(CustomWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        labelURL = new QLineEdit(CustomWidget);
        labelURL->setObjectName("labelURL");
        labelURL->setEnabled(true);
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy")});
        font.setPointSize(12);
        labelURL->setFont(font);
        labelURL->setCursor(QCursor(Qt::ArrowCursor));
        labelURL->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelURL->setMaxLength(32767);
        labelURL->setReadOnly(true);

        horizontalLayout->addWidget(labelURL);

        labelLogin = new QLineEdit(CustomWidget);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setFont(font);
        labelLogin->setCursor(QCursor(Qt::ArrowCursor));
        labelLogin->setEchoMode(QLineEdit::Password);
        labelLogin->setReadOnly(true);

        horizontalLayout->addWidget(labelLogin);

        labelPass = new QLineEdit(CustomWidget);
        labelPass->setObjectName("labelPass");
        labelPass->setFont(font);
        labelPass->setCursor(QCursor(Qt::ArrowCursor));
        labelPass->setEchoMode(QLineEdit::Password);
        labelPass->setReadOnly(true);

        horizontalLayout->addWidget(labelPass);

        toolButton = new QToolButton(CustomWidget);
        toolButton->setObjectName("toolButton");
        toolButton->setMaximumSize(QSize(50, 80));
        toolButton->setFont(font);
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(toolButton);

        deleteButton = new QPushButton(CustomWidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setFont(font);
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(deleteButton);


        retranslateUi(CustomWidget);

        QMetaObject::connectSlotsByName(CustomWidget);
    } // setupUi

    void retranslateUi(QWidget *CustomWidget)
    {
        CustomWidget->setWindowTitle(QCoreApplication::translate("CustomWidget", "Form", nullptr));
        labelLogin->setText(QString());
        labelPass->setText(QString());
        toolButton->setText(QCoreApplication::translate("CustomWidget", "Show", nullptr));
        deleteButton->setText(QCoreApplication::translate("CustomWidget", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomWidget: public Ui_CustomWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWIDGET_H
