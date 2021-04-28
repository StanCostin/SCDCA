/********************************************************************************
** Form generated from reading UI file 'ARCTANGENTA.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCTANGENTA_H
#define UI_ARCTANGENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARCTANGENTA
{
public:
    QLineEdit *send_mess;
    QLabel *receive_mess;
    QPushButton *button;

    void setupUi(QWidget *ARCTANGENTA)
    {
        if (ARCTANGENTA->objectName().isEmpty())
            ARCTANGENTA->setObjectName(QString::fromUtf8("ARCTANGENTA"));
        ARCTANGENTA->resize(814, 790);
        send_mess = new QLineEdit(ARCTANGENTA);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(240, 110, 291, 31));
        receive_mess = new QLabel(ARCTANGENTA);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(220, 190, 311, 191));
        button = new QPushButton(ARCTANGENTA);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(330, 420, 93, 28));

        retranslateUi(ARCTANGENTA);

        QMetaObject::connectSlotsByName(ARCTANGENTA);
    } // setupUi

    void retranslateUi(QWidget *ARCTANGENTA)
    {
        ARCTANGENTA->setWindowTitle(QApplication::translate("ARCTANGENTA", "ARCTANGENTA", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("ARCTANGENTA", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARCTANGENTA: public Ui_ARCTANGENTA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCTANGENTA_H
