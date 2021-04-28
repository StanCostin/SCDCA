#include "Client.h"
Client::Client()
{
}
Client::Client(const char * ip, int p)
{
	this->ipAddress = ip;
	this->port = p;
}
void Client::create_socket()
{
	// Initialize WinSock
	WSAData data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);
	if (wsResult != 0)
	{
		cerr << "Can't start Winsock, Err #" << wsResult << endl;
		return;
	}
	this->sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET)
	{
		cerr << "Can't create socket, Err #" << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}
	// Fill in a hint structure
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
}
void Client::connect_to_server()
{
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (connResult == SOCKET_ERROR)
	{
		cerr << "Can't connect to server, Err #" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
		return;
	}
}
void Client::process(string userInput)
{
	// Do-while loop to send and receive data
	char buf[4096];

	//do
	//{

	if (userInput.size() > 0)		// Make sure the user has typed in something
	{
		// Send the text
		int sendResult = send(sock, userInput.c_str(), userInput.size() + 1, 0);
		if (sendResult != SOCKET_ERROR)
		{
			// Wait for response
			ZeroMemory(buf, 4096);
			int bytesReceived = recv(sock, buf, 4096, 0);
			if (bytesReceived > 0)
			{
				//Echo response to console
				//cout << string(buf, 0, bytesReceived) << endl;
				this->message_received = string(buf, 0, bytesReceived);
			}
		}
	}

	//} while (userInput.size() > 0);
}
Client::~Client()
{
}