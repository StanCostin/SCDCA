/********************************************************************************
** Form generated from reading UI file 'COTANGENTAClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COTANGENTACLASS_H
#define UI_COTANGENTACLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COTANGENTAClass
{
public:
    QLineEdit *send_mess;
    QLabel *receive_mess;
    QPushButton *button;

    void setupUi(QWidget *COTANGENTAClass)
    {
        if (COTANGENTAClass->objectName().isEmpty())
            COTANGENTAClass->setObjectName(QString::fromUtf8("COTANGENTAClass"));
        COTANGENTAClass->resize(711, 639);
        send_mess = new QLineEdit(COTANGENTAClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(200, 100, 291, 31));
        receive_mess = new QLabel(COTANGENTAClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(180, 180, 311, 191));
        button = new QPushButton(COTANGENTAClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(290, 410, 93, 28));

        retranslateUi(COTANGENTAClass);

        QMetaObject::connectSlotsByName(COTANGENTAClass);
    } // setupUi

    void retranslateUi(QWidget *COTANGENTAClass)
    {
        COTANGENTAClass->setWindowTitle(QApplication::translate("COTANGENTAClass", "COTANGENTAClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("COTANGENTAClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class COTANGENTAClass: public Ui_COTANGENTAClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COTANGENTACLASS_H
