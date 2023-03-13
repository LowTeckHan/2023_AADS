#ifndef REFEREE_H
#define REFEREE_H
#include<string>
#include "Player.h"

class Referee
{
    private:
    std::string human__move;
    std::string pc_move;
    std::string human_name;
    std::string pc_name;

    public:
    Player* refGame(Player * player1, Player * player2);//p1 pc, p2 human
    Referee();


};




#endif