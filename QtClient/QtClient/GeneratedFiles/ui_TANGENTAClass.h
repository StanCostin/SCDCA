/********************************************************************************
** Form generated from reading UI file 'TANGENTAClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TANGENTACLASS_H
#define UI_TANGENTACLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TANGENTAClass
{
public:
    QLabel *receive_mess;
    QPushButton *button;
    QLineEdit *send_mess;

    void setupUi(QWidget *TANGENTAClass)
    {
        if (TANGENTAClass->objectName().isEmpty())
            TANGENTAClass->setObjectName(QString::fromUtf8("TANGENTAClass"));
        TANGENTAClass->resize(850, 726);
        receive_mess = new QLabel(TANGENTAClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(220, 190, 311, 191));
        button = new QPushButton(TANGENTAClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(320, 460, 93, 28));
        send_mess = new QLineEdit(TANGENTAClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(230, 100, 291, 31));

        retranslateUi(TANGENTAClass);

        QMetaObject::connectSlotsByName(TANGENTAClass);
    } // setupUi

    void retranslateUi(QWidget *TANGENTAClass)
    {
        TANGENTAClass->setWindowTitle(QApplication::translate("TANGENTAClass", "TANGENTAClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("TANGENTAClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TANGENTAClass: public Ui_TANGENTAClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TANGENTACLASS_H
