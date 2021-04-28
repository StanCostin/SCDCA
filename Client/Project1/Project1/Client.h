#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
using namespace std;
class Client
{
private:
	string ipAddress;
	int port;
	sockaddr_in hint;
	SOCKET sock;
public:
	Client();
	Client(string ipadr, int pt);
	void creareSocket();
	void conectareLaServer();
	void sendingReceivingDataClinetServer();
	void closeAll();
	~Client();
};

