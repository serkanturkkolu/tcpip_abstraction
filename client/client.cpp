#include <iostream>
#include "include/tcpip.h"
using namespace std;

int main()
{
	TcpIp client(TcpIp::Client);
	auto sk = client.socket(8881);
	std::cout << "Sock: " << sk << endl;
	auto bd = client.connect();
	std::cout << "Connect: " << bd << endl;
	unsigned char str[100] = {};
	auto cnt=client.read(str);
	std::cout << "Gelen: " << str << std::endl;
    cin.get();
	return 0;
}

