#include "Move.h"
#include "Player.h"

#include "Paper.h" 
#include "Rock.h" 
#include "Scissors.h"

#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"

#include <iostream>

using namespace std;

Move* Move::makeMove(string make)
{	
	make = choice;

	if (make == "Rock")
	{
		return new Rock;
		
	}

	else if (make == "Paper")
	{
		return new Paper;
	}

	else if(make == "Scissors")
	{
		return new Scissors;
	}


	else if(make == "Monkey")
	{
		return new Monkey;
	}

	else if(make == "Ninja")
	{
		return new Ninja;
	}

	else if(make == "Pirate")
	{
		return new Pirate;
	}

	else if(make == "Robot")
	{
		return new Robot;
	}

	else if (make =="Zombie")
	{
		return new Zombie;
	}

	

	return 0;
}

string Move::getName()
{
	return choice;
}

Move::Move()
{
	
}