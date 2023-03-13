#include"Robot.h"
#include <iostream>

using namespace std;


int Robot::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Robot")
	{
		return match =1;
	}

	if(choice == "Monkey" || "Pirate")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}