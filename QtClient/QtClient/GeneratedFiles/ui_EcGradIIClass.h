/********************************************************************************
** Form generated from reading UI file 'EcGradIIClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECGRADIICLASS_H
#define UI_ECGRADIICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EcGradIIClass
{
public:
    QPushButton *button;
    QLineEdit *send_mess;
    QLabel *receive_mess;

    void setupUi(QWidget *EcGradIIClass)
    {
        if (EcGradIIClass->objectName().isEmpty())
            EcGradIIClass->setObjectName(QString::fromUtf8("EcGradIIClass"));
        EcGradIIClass->resize(742, 636);
        button = new QPushButton(EcGradIIClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 410, 93, 28));
        send_mess = new QLineEdit(EcGradIIClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(210, 100, 291, 31));
        receive_mess = new QLabel(EcGradIIClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 180, 311, 191));

        retranslateUi(EcGradIIClass);

        QMetaObject::connectSlotsByName(EcGradIIClass);
    } // setupUi

    void retranslateUi(QWidget *EcGradIIClass)
    {
        EcGradIIClass->setWindowTitle(QApplication::translate("EcGradIIClass", "EcGradIIClass", nullptr));
        button->setText(QApplication::translate("EcGradIIClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EcGradIIClass: public Ui_EcGradIIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGRADIICLASS_H
