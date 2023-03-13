#ifndef COMPUTER_H
#define COMPUTER_H  
#include <string>

#include "Player.h"

class Computer : public Player
{
    private:
        std::string name_pc="Computer";
        std::string move_pc="Rock";

    public:
        std::string getName();
        std::string getMove();

};


#endif