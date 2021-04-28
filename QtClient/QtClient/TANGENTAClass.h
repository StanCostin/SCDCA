#pragma once

#include <QWidget>
#include "ui_TANGENTAClass.h"
#include"Client.h"

class TANGENTAClass : public QWidget, public Ui::TANGENTAClass
{
	Q_OBJECT

public:
	TANGENTAClass(Client *client, QWidget *parent = Q_NULLPTR);
	~TANGENTAClass();
	Client *CLIENT;
private:
	Ui::TANGENTAClass ui;
private slots:
	void button();
};
