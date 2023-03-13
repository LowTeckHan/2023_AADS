#ifndef MOVE_H
#define MOVE_H
#include <string>


class Move 
{
	private:
		std::string choice;

	public:
		std::string getName();//return user move
		Move* makeMove();

		virtual checkMove(std::string choice);

};

#endif