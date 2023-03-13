#include"Rock.h"
#include <iostream>
using namespace std;

Rock::Rock()
{
	
}
Move* Rock::makeMove()
{
	return new Rock;
}

int Rock::checkMove(string choice)// tie=1, lose=2 win=3
{
	//int match=0;

	if(choice == "Rock")
	{
		return 1;
	}

	if(choice == "Paper")
	{
		return 2;
	}

	else
	{
		return 3;
	}

}

int Rock::renum()
{
	return 5;
}