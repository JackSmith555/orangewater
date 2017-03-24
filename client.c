#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <stdlib.h>
/* #include "iolib.h"*/
int my_read(int,char*,int)
{
	return 0;
}
int my_write(int,char*,int)
{
	return 0;
}

#define MAX_LINE 80

int main(int argc,char *argv[])
{
	struct sockaddr_in sin;
	int port=8000;
	int s_fd;
	char buf[MAX_LINE];
	char str[]="test";
	char addr_p[INET_ADDRSTRLEN];
	int n;

	if(argc==2) str=&argv[1];
	memset(&sin,sizeof(sin),0);
	sin.sin_family=AF_INET;
	inet_pton(AF_INET,"127.0.0.1",&sin.sin_addr);
	sin.sin_port=htons(port);
	s_fd=socket(AF_INET,SOCK_DGRAM,0);

	if(s_fd==-1)
	{
		perror("fail to create socket");
		exit(1);
	}

	n=connect(s_fd,(struct sockaddr *)&sin,sizeof(sin));
	if(n==-1)
	{
		perror("fail to connect");
		exit(1);
	}
	else
	{
		printf("connection has been established\n");
	}
	n=my_write(s_fd,str,strlen(str)+1);

	if(n==-1) exit(1);

	n=my_read(s_fd,buf,MAX_LINE);
	if(n==-1) exit(1);
	printf("recive%s\n",buf);
	if(close(s_fd)==-1)
	{
		perror("fail to close");
		exit(1);
	}
	return 0;
}
