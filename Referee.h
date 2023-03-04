#ifndef Referee_H
#define Referee_H
#include<string>
#include "Player.h"

class Referee
{
    private:
    char human__move;

    public:
    Player* refGame(Player * player1, Player * player2);//p1 pc, p2 human
    Referee();


};




#endif