#ifndef MOVE_H
#define MOVE_H
#include <string>
//#include "Human.h"


class Move 
{
	private:
		std::string choice;


	public:
		std::string getName();//return user move
		static Move* makeMove(std::string make);
		Move();
		~Move();

		virtual int checkMove(std::string choice)=0;



};

#endif
