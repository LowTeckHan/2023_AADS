#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include "Move.h"


using namespace std;


class Player
{
    public:
        Move* makeMove();
        virtual std::string getName();
        Player();
        ~Player();
        virtual std::string getMove();
        
  

};

#endif