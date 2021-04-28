/********************************************************************************
** Form generated from reading UI file 'IntegralaClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRALACLASS_H
#define UI_INTEGRALACLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntegralaClass
{
public:
    QPushButton *button;
    QLineEdit *send_mess;
    QLabel *receive_mess;

    void setupUi(QWidget *IntegralaClass)
    {
        if (IntegralaClass->objectName().isEmpty())
            IntegralaClass->setObjectName(QString::fromUtf8("IntegralaClass"));
        IntegralaClass->resize(892, 670);
        button = new QPushButton(IntegralaClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(330, 410, 93, 28));
        send_mess = new QLineEdit(IntegralaClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(230, 100, 291, 31));
        receive_mess = new QLabel(IntegralaClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(220, 180, 311, 191));

        retranslateUi(IntegralaClass);

        QMetaObject::connectSlotsByName(IntegralaClass);
    } // setupUi

    void retranslateUi(QWidget *IntegralaClass)
    {
        IntegralaClass->setWindowTitle(QApplication::translate("IntegralaClass", "IntegralaClass", nullptr));
        button->setText(QApplication::translate("IntegralaClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IntegralaClass: public Ui_IntegralaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRALACLASS_H
