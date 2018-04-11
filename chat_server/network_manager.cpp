#include "network_manager.hpp"

void NetworkManager::start(){
    //
    int listenfd, connfd, port;
    socklen_t clientlen;
    struct sockaddr_in clientaddr;
    struct hostent *hp;
    char *haddrp;
    port = 6666;

    listenfd = Open_listenfd(6666);
    while (1) {
	clientlen = sizeof(clientaddr);
	connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen);

	/* determine the domain name and IP address of the client */
	hp = Gethostbyaddr((const char *)&clientaddr.sin_addr.s_addr, 
			   sizeof(clientaddr.sin_addr.s_addr), AF_INET);
	haddrp = inet_ntoa(clientaddr.sin_addr);
	printf("server connected to %s (%s)\n", hp->h_name, haddrp);

	//echo(connfd);
        size_t n; 
        char buf[1000];
        rio_t rio;
        Rio_readinitb(&rio,connfd);
        while((n = Rio_readlineb(&rio, buf, 1000)) != 0){
            printf("server received %d byter %s\n", n, buf);
            Rio_writen(connfd, buf, n);
        }
	Close(connfd);
    }
    
}

