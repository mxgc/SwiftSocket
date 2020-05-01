//
//  ytcpsocket.h
//  
//
//  Created by mxgc on 2020-05-01.
//

#ifndef ytcpsocket_h
#define ytcpsocket_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <dirent.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/select.h>
#include <sys/ioctl.h>
#endif /* ytcpsocket.h */

int ytcpsocket_connect(const char *host, int port, int timeout);
int ytcpsocket_close(int socketfd);
int ytcpsocket_bytes_available(int socketfd);
int ytcpsocket_send(int socketfd, const char *data, int len);
int ytcpsocket_pull(int socketfd, char *data, int len, int timeout_sec);
int ytcpsocket_listen(const char *address, int port) ;
int ytcpsocket_accept(int onsocketfd, char *remoteip, int *remoteport, int timeouts);
int ytcpsocket_port(int socketfd);
