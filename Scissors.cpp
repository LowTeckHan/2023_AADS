#include"Scissors.h"
#include <iostream>
using namespace std;

Scissors::Scissors()
{
	
}

Move* Scissors::makeMove()
{
	return new Scissors;
}

int Scissors::checkMove(string choice) // tie=1, lose=2, win=3
{
	int match=0;

	if(choice == "Scissors")
	{
		return match =1;
	}

	if(choice == "Rock")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}