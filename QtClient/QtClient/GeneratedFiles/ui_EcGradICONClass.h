/********************************************************************************
** Form generated from reading UI file 'EcGradICONClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECGRADICONCLASS_H
#define UI_ECGRADICONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EcGradICONClass
{
public:
    QLabel *receive_mess;
    QPushButton *button;
    QLineEdit *send_mess;

    void setupUi(QWidget *EcGradICONClass)
    {
        if (EcGradICONClass->objectName().isEmpty())
            EcGradICONClass->setObjectName(QString::fromUtf8("EcGradICONClass"));
        EcGradICONClass->resize(733, 630);
        receive_mess = new QLabel(EcGradICONClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(200, 190, 311, 191));
        button = new QPushButton(EcGradICONClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(310, 420, 93, 28));
        send_mess = new QLineEdit(EcGradICONClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(220, 110, 291, 31));

        retranslateUi(EcGradICONClass);

        QMetaObject::connectSlotsByName(EcGradICONClass);
    } // setupUi

    void retranslateUi(QWidget *EcGradICONClass)
    {
        EcGradICONClass->setWindowTitle(QApplication::translate("EcGradICONClass", "EcGradICONClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("EcGradICONClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EcGradICONClass: public Ui_EcGradICONClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGRADICONCLASS_H
