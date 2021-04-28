#include "CramerClass.h"
CramerClass::CramerClass(Client *client,QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	CLIENT = client;
	ui.setupUi(this);
	QPixmap bkgnd("D:/Atm_Cursuri_Anul2/sem_II/ProiectPOO/SCDCA/InterfataClient/QtClient/parchet-laminat-stejar-amestecat-contrast-gri.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	ui.button->setStyleSheet("background-color:lightgrey");
	ui.receive_mess->setStyleSheet("background-color:lightgrey");
	ui.send_mess->setStyleSheet("background-color:lightgrey");
	connect(ui.button, SIGNAL(released()), this, SLOT(button()));
	ui.comboBox->addItem("Cramer2X2");
	ui.comboBox->addItem("Cramer3X3");
}
CramerClass::~CramerClass()
{
}
void CramerClass::button()
{
	if (ui.comboBox->currentText() == "Cramer2X2")
	{
		string Send1 = ui.send_mess->text().toStdString();
		string result = "(Cramer2X2)" + Send1;
		CLIENT->process(result);
		string mess = CLIENT->get_message_received();
		ui.receive_mess->setText(QString::fromStdString(mess));
	}
	if (ui.comboBox->currentText() == "Cramer3X3")
	{
		string Send1 = ui.send_mess->text().toStdString();
		string result = "(Cramer3X3)" + Send1;
		CLIENT->process(result);
		string mess = CLIENT->get_message_received();
		ui.receive_mess->setText(QString::fromStdString(mess));
	}
}