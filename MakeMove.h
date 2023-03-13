#ifndef MakeMove_h
#define MakeMove_h
#include"Player.h"

class MakeMove : public Player
{
	private:
		std::string choice;

	public:

		Move* makeMove();
};

#endif