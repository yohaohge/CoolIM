#include "network_manager.hpp"
#include <stdlib.h>
#include <string>
#include "csapp.h"

#define MAXDATASIZE 100
int NetworkManager::sendMsg(std::string str){
    //implement 
   int socketfd = Open_clientfd("127.0.0.1", 6666);
   
   Rio_writen(socketfd, const_cast<char *>(str.c_str()), str.length());

   Close(socketfd); 
   return 0;
}

