#include"Monkey.h"
#include<iostream>
using namespace std;

Move* Monkey::makeMove()
{
	return new Monkey;
}

int Monkey::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Monkey")
	{
		return match =1;
	}

	if(choice == "Zombie" || "Pirate")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}