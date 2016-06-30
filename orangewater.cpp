#include <iostream>
#include <bitset>
#include <vector>
#include <cstdlib>
#include <cstdio>
//#include "loginout.h"
//#include "core.h"
//#include "loader.h"

using namespace std;

int menu()
{
	int choose=0;
   cout<<"1.login game"<<endl;
   cout<<"2.configuration"<<endl;
   cout<<"3.personal result rankings"<<endl;
   cout<<"4.find online personals"<<endl;
   cout<<"5.registered new user"<<endl;
   cout<<"6.exit game"<<endl;
   cout<<"please choose(1~5):"<<endl;
   cin>>choose;
	while(choose!=5)
	{
		switch(choose)
		{
			case 1:
				logingame();
				break;
			case 2:
				config();
				break;
			case 3:
				ranking();
				break;
			case 4:
				registuser();
				break;
			case 5:
				exitgame();
				break;
			case default:
				break;

		}


	}
   return choose;

}

int main(int agrc , char** agr)
{
	menu();
	cout<<"hello , world!"<<endl;
	return 0;
}

