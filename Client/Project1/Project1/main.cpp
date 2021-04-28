#include"Client.h"
void main()
{
	// Initialze winsock
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	int wsOk = WSAStartup(ver, &wsData);
	if (wsOk != 0)
	{
		cerr << "Can't Initialize winsock! Quitting" << endl;
		return;
	}
	Client a("127.0.0.1", 54000);
	a.creareSocket();
	a.conectareLaServer();
	a.sendingReceivingDataClinetServer();
	a.closeAll();
}