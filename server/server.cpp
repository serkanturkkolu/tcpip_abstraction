#include <iostream>
#include "include/tcpip.h"
using namespace std;

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
    std::cout << "Connected Ip Address: " << server.getConnectedIpAddress() << std::endl; 
    cin.get();
    return 0;
}