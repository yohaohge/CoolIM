#ifdef CLIENTCONFIG_H
#define CLIENTCONFIG_H

#include <string>

class ClientConfig{
public:
    static string service_ip = "127.0.0.1";
    static string service_port = "6666";
    
public:
    static loadconfig();
};

#endif
