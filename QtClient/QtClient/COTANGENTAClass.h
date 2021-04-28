#pragma once

#include <QWidget>
#include "ui_COTANGENTAClass.h"
#include"Client.h"

class COTANGENTAClass : public QWidget, public Ui::COTANGENTAClass
{
	Q_OBJECT

public:
	COTANGENTAClass(Client *client, QWidget *parent = Q_NULLPTR);
	~COTANGENTAClass();
	Client *CLIENT;
private:
	Ui::COTANGENTAClass ui;
private slots:
	void button();
};
