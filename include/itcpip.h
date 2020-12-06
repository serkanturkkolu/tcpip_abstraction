
#ifndef _ITCPIP_H
#define _ITCPIP_H
#include <string>
#include <vector>
#include <cstring>

class ITcpIp {
#define DEFAULT_ADDRESS "127.0.0.1"
#define DEFAULT_PORT 8888
public:
    enum Type {
        Server,
        Client
    };
protected:
    enum Type type;
public:
    ITcpIp(Type t, const char *address = DEFAULT_ADDRESS, int port=DEFAULT_PORT) {
        type = t;

        memcpy(serverAddress, address,strlen(address)+1);
        sock_port_no = port;
    }
    virtual int write(const unsigned char sending_data[],size_t len) = 0;
    virtual int read(unsigned char *) = 0;
    virtual int socket(int) = 0;
    virtual int socket() = 0;
    virtual int bind() = 0;
    virtual int listen() = 0;
    virtual int connect() = 0;
    virtual int accept() = 0;
    virtual int close() = 0;
    virtual const char *getConnectedIpAddress()=0;
protected:
    int sock_port_no;
    char serverAddress[32] = { 0 };
};

    
#endif
