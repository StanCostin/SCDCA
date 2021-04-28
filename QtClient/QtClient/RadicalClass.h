#pragma once

#include <QWidget>
#include "ui_RadicalClass.h"
#include"Client.h"

class RadicalClass : public QWidget
{
	Q_OBJECT

public:
	RadicalClass(Client *client, QWidget *parent = Q_NULLPTR);
	~RadicalClass();
	Client *CLIENT;
private:
	Ui::RadicalClass ui;
private slots:
	void button();
};
