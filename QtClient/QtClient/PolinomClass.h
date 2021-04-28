#pragma once

#include <QWidget>
#include "ui_PolinomClass.h"
#include "Client.h"
class PolinomClass : public QWidget, public Ui::PolinomClass
{
	Q_OBJECT

public:
	PolinomClass(Client *client,QWidget *parent = Q_NULLPTR);
	~PolinomClass();
	Client *CLIENT;
private:
	Ui::PolinomClass ui;
private slots:
	void button();
};
