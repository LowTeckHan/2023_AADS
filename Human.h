#ifndef Human_H
#define Human_H
#include"Player.h"
#include<string>

class Human : public Player
{
    private:
    std::string human_name;

    public:
    char makeMove();
    string getName();
    char getMove();
    Human();
    char human_move;


};


#endif

