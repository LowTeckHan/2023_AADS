#ifndef HUMAN_H
#define HUMAN_H

#include"Player.h"
#include<string>

class Human : private Player
{
    private:
    std::string human_name="Human";
    std::string human_move;

    public:
    Move* makeMove();
    std::string getName();
    std::string getMove();
    Human(std::string name);
    Human();



};


#endif

