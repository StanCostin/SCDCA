#pragma once

#include <QWidget>
#include "ui_LogaritmClass.h"
#include "Client.h"

class LogaritmClass : public QWidget, public Ui::LogaritmClass
{
	Q_OBJECT

public:
	LogaritmClass(Client *client, QWidget *parent = Q_NULLPTR);
	~LogaritmClass();
	Client *CLIENT;
private:
	Ui::LogaritmClass ui;
private slots:
	void button();
};
