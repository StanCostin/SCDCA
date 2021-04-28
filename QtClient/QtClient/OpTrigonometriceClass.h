#pragma once

#include <QWidget>
#include "ui_OpTrigonometriceClass.h"
#include "Client.h"

class OpTrigonometriceClass : public QWidget, public Ui::OpTrigonometriceClass
{
	Q_OBJECT

public:
	OpTrigonometriceClass(Client *client, QWidget *parent = Q_NULLPTR);
	~OpTrigonometriceClass();
	Client *CLIENT;
private:
	Ui::OpTrigonometriceClass ui;
private slots:
	void button();
};
