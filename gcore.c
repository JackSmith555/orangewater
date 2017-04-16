#include <stdio.h>
#include <stdlib.h>

#define OK 1;
typedef struct{
	int idnum;
	int glidnum;
	int xpl;
	int ypl;
	int zpl;
	int life;
	int freedom;
	qcolor qcolr;
	int  qstatu;
}qclass;

qclass globalsess[NUM];
int userid[pnum];
int ugroup[];

int userlogin();
int roadview();
void read(int,int,int,qcolor);
void set(int,int,int,qcolor);
void gloread(int,int,int,qcolor);
void gloset(int,int,int,qcolor);
int check();
int record();
int rank();
int g_exit();

localply()
{
	
	read(x,y,z,c);
	set(x,y,z,c);
}
globalply()
{
	gloread(x,y,z,c);
	gloset(x,y,z,c);

}
onlywatch()
{

}
int main()
{
	
	(onlywatch==OK)?userlogin():roadview();
	init();
	int	crgroup();
	sttime();
	while()
	{
		
		while(contrlcode==QUIT)
		{
		localply();
		if (check());
		commitup();
		globalply();
		check();
		}
	}
	stptime();
	record();
	rank();
	g_exit();
	return 0;
｝


