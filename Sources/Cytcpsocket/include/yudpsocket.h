//
//  yudpsocket.h
//  
//
//  Created by mxgc on 2020-05-01.
//

#ifndef yudpsocket_h
#define yudpsocket_h

#define yudpsocket_buff_len 8192

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>

#endif /* yudpsocket.h */

int yudpsocket_server(const char *address, int port);
int yudpsocket_recive(int socket_fd, char *outdata, int expted_len, char *remoteip, int *remoteport);
int yudpsocket_close(int socket_fd);
int yudpsocket_client();
int yudpsocket_get_server_ip(char *host, char *ip);
int yudpsocket_sentto(int socket_fd, char *msg, int len, char *toaddr, int topotr);
void enable_broadcast(int socket_fd);
