#pragma once
#include "Client.h"
#include <QWidget>
#include "ui_QtGuiClass.h"
#include "COSClass.h"
#include "SINClass.h"
#include "VectorClass.h"
#include"TANGENTAClass.h"
#include"ARCCOSClass.h"
#include"ARCSINUSClass.h"
#include"ARCTANGENTA.h"
#include"ARCCOTANGENTAClass.h"
#include"COTANGENTAClass.h"
#include"RadicalClass.h"
#include"PutereClass.h"
#include"EcGradIFGClass.h"
#include"EcGradICONClass.h"
#include"EcGradIIClass.h"
#include"LogaritmClass.h"
#include"OpTrigonometriceClass.h"
#include"IntegralaClass.h"
#include"PolinomClass.h"
#include"CramerClass.h"
#include"PermutariClass.h"
#include"AranjamenteClass.h"
#include"CombinariClass.h"
class QtGuiClass : public QWidget, public Ui::QtGuiClass
{
	Q_OBJECT
	Client *CLIENT;
public:
	QtGuiClass(Client *client,string list,QWidget *parent = Q_NULLPTR);
	~QtGuiClass();
private:
	Ui::QtGuiClass ui;
	char word[500][100];
private slots:
	void button();
};