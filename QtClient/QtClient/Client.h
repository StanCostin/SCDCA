#pragma once
#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

using namespace std;
class Client
{
	string ipAddress;		// IP Address of the server
	int port;				// Listening port # on the server
	SOCKET sock;
	sockaddr_in hint;
	string message_received;
public:
	Client();
	Client(const char*ip, int p);
	void create_socket();
	void connect_to_server();
	void process(string userInput);
	void close_socket() { closesocket(sock); };
	string get_message_received() { return this->message_received; };
	~Client();
};