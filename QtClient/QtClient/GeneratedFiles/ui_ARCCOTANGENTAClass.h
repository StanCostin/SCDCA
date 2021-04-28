/********************************************************************************
** Form generated from reading UI file 'ARCCOTANGENTAClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCCOTANGENTACLASS_H
#define UI_ARCCOTANGENTACLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARCCOTANGENTAClass
{
public:
    QPushButton *button;
    QLabel *receive_mess;
    QLineEdit *send_mess;

    void setupUi(QWidget *ARCCOTANGENTAClass)
    {
        if (ARCCOTANGENTAClass->objectName().isEmpty())
            ARCCOTANGENTAClass->setObjectName(QString::fromUtf8("ARCCOTANGENTAClass"));
        ARCCOTANGENTAClass->resize(775, 644);
        button = new QPushButton(ARCCOTANGENTAClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(310, 410, 93, 28));
        receive_mess = new QLabel(ARCCOTANGENTAClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(200, 180, 311, 191));
        send_mess = new QLineEdit(ARCCOTANGENTAClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(220, 100, 291, 31));

        retranslateUi(ARCCOTANGENTAClass);

        QMetaObject::connectSlotsByName(ARCCOTANGENTAClass);
    } // setupUi

    void retranslateUi(QWidget *ARCCOTANGENTAClass)
    {
        ARCCOTANGENTAClass->setWindowTitle(QApplication::translate("ARCCOTANGENTAClass", "ARCCOTANGENTAClass", nullptr));
        button->setText(QApplication::translate("ARCCOTANGENTAClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ARCCOTANGENTAClass: public Ui_ARCCOTANGENTAClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCCOTANGENTACLASS_H
