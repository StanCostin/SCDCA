/********************************************************************************
** Form generated from reading UI file 'AranjamenteClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARANJAMENTECLASS_H
#define UI_ARANJAMENTECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AranjamenteClass
{
public:
    QLabel *receive_mess;
    QLineEdit *send_mess;
    QPushButton *button;

    void setupUi(QWidget *AranjamenteClass)
    {
        if (AranjamenteClass->objectName().isEmpty())
            AranjamenteClass->setObjectName(QString::fromUtf8("AranjamenteClass"));
        AranjamenteClass->resize(525, 478);
        receive_mess = new QLabel(AranjamenteClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(100, 150, 311, 191));
        send_mess = new QLineEdit(AranjamenteClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(120, 70, 291, 31));
        button = new QPushButton(AranjamenteClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(210, 380, 93, 28));

        retranslateUi(AranjamenteClass);

        QMetaObject::connectSlotsByName(AranjamenteClass);
    } // setupUi

    void retranslateUi(QWidget *AranjamenteClass)
    {
        AranjamenteClass->setWindowTitle(QApplication::translate("AranjamenteClass", "AranjamenteClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("AranjamenteClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AranjamenteClass: public Ui_AranjamenteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARANJAMENTECLASS_H
