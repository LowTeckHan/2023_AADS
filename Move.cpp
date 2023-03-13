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

Move* Move::makeMove()
{	

	cin>>choice;

	if (choice == "Rock")
	{
		return new Rock;
		
	}

	else if (choice == "Paper")
	{
		return new Paper;
	}

	else if(choice == "Scissors")
	{
		return new Scissors;
	}


	else if(choice == "Monkey")
	{
		return new Monkey;
	}

	else if(choice == "Ninja")
	{
		return new Ninja;
	}

	else if(choice == "Pirate")
	{
		return new Pirate;
	}

	else if(choice == "Robot")
	{
		return new Robot;
	}

	else if (choice =="Zombie")
	{
		return new Zombie;
	}

	

	return 0;
}

string Move::getName()
{
	return choice;
}