#include "QtClient.h"
#include <QtWidgets/QApplication>
#include <QtGuiClass.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Client C1("127.0.0.1", 54000);
	QtClient w(&C1, nullptr);
	w.show();
	return a.exec();
}