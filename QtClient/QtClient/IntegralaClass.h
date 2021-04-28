#pragma once

#include <QWidget>
#include "ui_IntegralaClass.h"
#include "Client.h"

class IntegralaClass : public QWidget, public Ui::IntegralaClass
{
	Q_OBJECT

public:
	IntegralaClass(Client *client, QWidget *parent = Q_NULLPTR);
	~IntegralaClass();
	Client *CLIENT;
private:
	Ui::IntegralaClass ui;
private slots:
	void button();
};
