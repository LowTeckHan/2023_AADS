#ifndef REFEREE_H
#define REFEREE_H
#include<string>
#include "Player.h"

class Referee
{
    private:
    std::string p1_move;
    std::string p2_move;
    std::string p1_name;
    std::string p2_name;

    public:
    Player* refGame(int i,Player * player1, Player * player2);
    Referee();



};




#endif