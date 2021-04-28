#pragma once

#include <QWidget>
#include "ui_EcGradICONClass.h"
#include"Client.h"

class EcGradICONClass : public QWidget, public Ui::EcGradICONClass
{
	Q_OBJECT

public:
	EcGradICONClass(Client *client, QWidget *parent = Q_NULLPTR);
	~EcGradICONClass();
	Client *CLIENT;
private:
	Ui::EcGradICONClass ui;
private slots:
	void button();
};
