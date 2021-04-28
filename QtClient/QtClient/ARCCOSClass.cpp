#include "ARCCOSClass.h"

ARCCOSClass::ARCCOSClass(Client *client, QWidget *parent)
	: QWidget(parent)
{
	CLIENT = client;
	ui.setupUi(this);
	QPixmap bkgnd("D:/Atm_Cursuri_Anul2/sem_II/ProiectPOO/SCDCA/InterfataClient/QtClient/Wood-Slider-Background-Wallpaper-HD.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	ui.button->setStyleSheet("background-color:lightgrey");
	ui.receive_mess->setStyleSheet("background-color:lightgrey");
	ui.send_mess->setStyleSheet("background-color:lightgrey");
	connect(ui.button, SIGNAL(released()), this, SLOT(button()));
}

ARCCOSClass::~ARCCOSClass()
{
}

void ARCCOSClass::button()
{
	string Send = ui.send_mess->text().toStdString();
	string result = "(Arccos)" + Send;
	CLIENT->process(result);
	string mess = CLIENT->get_message_received();
	ui.receive_mess->setText(QString::fromStdString(mess));
}

