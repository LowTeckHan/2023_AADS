#include"Zombie.h"
#include <iostream>

using namespace std;

Zombie::Zombie()
{
	
}



Move* Zombie::makeMove()
{
	return new Zombie;
}

int Zombie::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Zombie")
	{
		return match =1;
	}

	if(choice == "Ninja" || "Robot")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}