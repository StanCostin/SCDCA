#pragma once

#include <QWidget>
#include "ui_ARCCOTANGENTAClass.h"
#include"Client.h"

class ARCCOTANGENTAClass : public QWidget
{
	Q_OBJECT

public:
	ARCCOTANGENTAClass(Client *client, QWidget *parent = Q_NULLPTR);
	~ARCCOTANGENTAClass();
	Client *CLIENT;
private:
	Ui::ARCCOTANGENTAClass ui;
private slots:
	void button();
};
