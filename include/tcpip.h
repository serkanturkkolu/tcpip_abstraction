

#ifndef _TCPIP_H_
#define _TCPIP_H_

#if defined __linux__ || defined __APPLE__

#include <netinet/in.h>
#elif _WIN32
#pragma once
#include "winsock2.h"
#endif

#include <string>
#include "itcpip.h"

class TcpIp:public ITcpIp{
#ifdef _WIN32
#define MAX_BUFFER_SIZE 1024
private:
WSADATA wsaData;
struct sockaddr_in m_serv_addr;
int m_clilen = sizeof(m_serv_addr);

struct sockaddr_in m_cli_addr;
int m_servlen = sizeof(m_cli_addr);

SOCKET m_newsockfd = INVALID_SOCKET;
SOCKET m_sockfd = INVALID_SOCKET;

#elif defined __linux__ || defined __APPLE__
private:
    int m_sockfd=-1;
    int m_newsockfd=-1;
    socklen_t m_clilen , m_servlen;
    static const int MAX_BUFFER_SIZE=1024;
    struct sockaddr_in m_serv_addr, m_cli_addr;
#endif
public:
    TcpIp(ITcpIp::Type t, const char *address, int port):ITcpIp(t,address,port){}
    TcpIp(ITcpIp::Type t, const char *address):ITcpIp(t,address){}
    TcpIp(ITcpIp::Type t):ITcpIp(t){}
    virtual int write(const unsigned char sending_data[],size_t len)override;
    virtual int read(unsigned char *)override;
    virtual int socket(int)override;
    virtual int socket()override;
    virtual int bind()override;
    virtual int listen()override;
    virtual int connect()override;
    virtual int accept()override;
    virtual int close()override;
private:

};

#endif
