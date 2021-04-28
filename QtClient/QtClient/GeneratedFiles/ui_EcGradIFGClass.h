/********************************************************************************
** Form generated from reading UI file 'EcGradIFGClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECGRADIFGCLASS_H
#define UI_ECGRADIFGCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EcGradIFGClass
{
public:
    QPushButton *button;
    QLabel *receive_mess;
    QLineEdit *send_mess;

    void setupUi(QWidget *EcGradIFGClass)
    {
        if (EcGradIFGClass->objectName().isEmpty())
            EcGradIFGClass->setObjectName(QString::fromUtf8("EcGradIFGClass"));
        EcGradIFGClass->resize(740, 683);
        button = new QPushButton(EcGradIFGClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 420, 93, 28));
        receive_mess = new QLabel(EcGradIFGClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 190, 311, 191));
        send_mess = new QLineEdit(EcGradIFGClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(210, 110, 291, 31));

        retranslateUi(EcGradIFGClass);

        QMetaObject::connectSlotsByName(EcGradIFGClass);
    } // setupUi

    void retranslateUi(QWidget *EcGradIFGClass)
    {
        EcGradIFGClass->setWindowTitle(QApplication::translate("EcGradIFGClass", "EcGradIFGClass", nullptr));
        button->setText(QApplication::translate("EcGradIFGClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EcGradIFGClass: public Ui_EcGradIFGClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGRADIFGCLASS_H
