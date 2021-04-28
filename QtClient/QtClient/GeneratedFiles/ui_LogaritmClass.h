/********************************************************************************
** Form generated from reading UI file 'LogaritmClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGARITMCLASS_H
#define UI_LOGARITMCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogaritmClass
{
public:
    QPushButton *button;
    QLineEdit *send_mess;
    QLabel *receive_mess;

    void setupUi(QWidget *LogaritmClass)
    {
        if (LogaritmClass->objectName().isEmpty())
            LogaritmClass->setObjectName(QString::fromUtf8("LogaritmClass"));
        LogaritmClass->resize(739, 631);
        button = new QPushButton(LogaritmClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 430, 93, 28));
        send_mess = new QLineEdit(LogaritmClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(200, 120, 291, 31));
        receive_mess = new QLabel(LogaritmClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 200, 311, 191));

        retranslateUi(LogaritmClass);

        QMetaObject::connectSlotsByName(LogaritmClass);
    } // setupUi

    void retranslateUi(QWidget *LogaritmClass)
    {
        LogaritmClass->setWindowTitle(QApplication::translate("LogaritmClass", "LogaritmClass", nullptr));
        button->setText(QApplication::translate("LogaritmClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogaritmClass: public Ui_LogaritmClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGARITMCLASS_H
