#include <iostream>
#include "include/tcpip.h"
using namespace std;
/*
int main()
{
    TcpIp server(TcpIp::Server);
    auto sk = server.socket(8881);
    std::cout << "Sock: " << sk << endl;
    auto bd=server.bind();
    std::cout << "Bind: " << bd << endl;
    auto ls = server.listen();
    std::cout << "Listened: " << ls << endl;
    auto ac = server.accept();
    std::cout << "Accepted: " << ac << endl;
    server.write((u_char*)"test",4);
	system("PAUSE");
    return 0;
}
*/

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
	system("PAUSE");
	return 0;
}

