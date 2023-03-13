#include"Pirate.h"
#include<iostream>

using namespace std;

Move* Pirate::makeMove()
{
	return new Pirate;
}

int Pirate::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Pirate")
	{
		return match =1;
	}

	if(choice == "Zombie" || "Ninja")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}
