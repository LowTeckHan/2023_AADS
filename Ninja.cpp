#include"Ninja.h"
#include <iostream>
using namespace std;

Ninja::Ninja()
{

}

Move* Ninja::makeMove()
{
	return new Ninja;
};

int Ninja::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Ninja")
	{
		return match =1;
	}

	if(choice == "Monkey" || "Robot")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}