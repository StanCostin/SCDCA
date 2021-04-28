/********************************************************************************
** Form generated from reading UI file 'CramerClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAMERCLASS_H
#define UI_CRAMERCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CramerClass
{
public:
    QLineEdit *send_mess;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *button;
    QLabel *receive_mess;

    void setupUi(QWidget *CramerClass)
    {
        if (CramerClass->objectName().isEmpty())
            CramerClass->setObjectName(QString::fromUtf8("CramerClass"));
        CramerClass->resize(1038, 610);
        send_mess = new QLineEdit(CramerClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(390, 180, 241, 61));
        comboBox = new QComboBox(CramerClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(450, 70, 141, 22));
        label_2 = new QLabel(CramerClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 60, 131, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        button = new QPushButton(CramerClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(470, 490, 93, 28));
        receive_mess = new QLabel(CramerClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(180, 270, 611, 161));

        retranslateUi(CramerClass);

        QMetaObject::connectSlotsByName(CramerClass);
    } // setupUi

    void retranslateUi(QWidget *CramerClass)
    {
        CramerClass->setWindowTitle(QApplication::translate("CramerClass", "CramerClass", nullptr));
        label_2->setText(QApplication::translate("CramerClass", "Alegeti tipul ", nullptr));
        button->setText(QApplication::translate("CramerClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CramerClass: public Ui_CramerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAMERCLASS_H
