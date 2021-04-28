#pragma once

#include <QWidget>
#include "ui_EcGradIFGClass.h"
#include"Client.h"

class EcGradIFGClass : public QWidget, public Ui::EcGradIFGClass
{
	Q_OBJECT

public:
	EcGradIFGClass(Client *client, QWidget *parent = Q_NULLPTR);
	~EcGradIFGClass();
	Client *CLIENT;
private:
	Ui::EcGradIFGClass ui;
private slots:
	void button();
};
