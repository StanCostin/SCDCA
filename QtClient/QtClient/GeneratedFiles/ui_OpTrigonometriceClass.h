/********************************************************************************
** Form generated from reading UI file 'OpTrigonometriceClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTRIGONOMETRICECLASS_H
#define UI_OPTRIGONOMETRICECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpTrigonometriceClass
{
public:
    QPushButton *button;
    QLineEdit *send_mess;
    QLabel *receive_mess;

    void setupUi(QWidget *OpTrigonometriceClass)
    {
        if (OpTrigonometriceClass->objectName().isEmpty())
            OpTrigonometriceClass->setObjectName(QString::fromUtf8("OpTrigonometriceClass"));
        OpTrigonometriceClass->resize(743, 649);
        button = new QPushButton(OpTrigonometriceClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 440, 93, 28));
        send_mess = new QLineEdit(OpTrigonometriceClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(200, 130, 291, 31));
        receive_mess = new QLabel(OpTrigonometriceClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 210, 311, 191));

        retranslateUi(OpTrigonometriceClass);

        QMetaObject::connectSlotsByName(OpTrigonometriceClass);
    } // setupUi

    void retranslateUi(QWidget *OpTrigonometriceClass)
    {
        OpTrigonometriceClass->setWindowTitle(QApplication::translate("OpTrigonometriceClass", "OpTrigonometriceClass", nullptr));
        button->setText(QApplication::translate("OpTrigonometriceClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpTrigonometriceClass: public Ui_OpTrigonometriceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTRIGONOMETRICECLASS_H
