#pragma once

#include <QWidget>
#include "ui_EcGradIIClass.h"
#include"Client.h"

class EcGradIIClass : public QWidget
{
	Q_OBJECT

public:
	EcGradIIClass(Client *client, QWidget *parent = Q_NULLPTR);
	~EcGradIIClass();
	Client *CLIENT;
private:
	Ui::EcGradIIClass ui;
private slots:
	void button();
};
