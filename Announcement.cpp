#include "Announcement.h"
#include <iostream>
#include "Player.h"

using namespace std;

void Anno::checkwin(int con, string p1, string p2)// 1=tie, 2=p2 win, 3=p1 win
{
	con =0;
	if (con==1)
	{
		cout<<"Tie"<<endl;
	}

	else if(con==2)
	{
		cout<<p2<<endl;
	}

	else if(con==3)
	{
		cout<<p1<<endl;
	}
}