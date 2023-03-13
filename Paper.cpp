#include"Paper.h"
#include <iostream>
using namespace std;

Paper::Paper()
{
	
}

Move* Paper::makeMove()
{
	return new Paper;
}

int Paper::checkMove(string choice)// tie=1, lose=2 win=3
{
	int match=0;

	if(choice == "Paper")
	{
		return match =1;
	}

	if(choice == "Scissors")
	{
		return match =2;
	}

	else
	{
		return match =3;
	}

}