/********************************************************************************
** Form generated from reading UI file 'SINClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINCLASS_H
#define UI_SINCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SINClass
{
public:
    QLineEdit *send_mess;
    QLabel *receive_mess;
    QPushButton *button;

    void setupUi(QWidget *SINClass)
    {
        if (SINClass->objectName().isEmpty())
            SINClass->setObjectName(QString::fromUtf8("SINClass"));
        SINClass->resize(621, 658);
        send_mess = new QLineEdit(SINClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(160, 80, 291, 31));
        receive_mess = new QLabel(SINClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(150, 160, 311, 191));
        button = new QPushButton(SINClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(260, 430, 93, 28));

        retranslateUi(SINClass);

        QMetaObject::connectSlotsByName(SINClass);
    } // setupUi

    void retranslateUi(QWidget *SINClass)
    {
        SINClass->setWindowTitle(QApplication::translate("SINClass", "SINClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("SINClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SINClass: public Ui_SINClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINCLASS_H
