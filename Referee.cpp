#include "Referee.h"
#include"Player.h"
#include <iostream>
#include<string>
#include<vector>
#include "Move.h"
#include "Announcement.h"


using namespace std;

Referee::Referee()
{

}

Player* Referee::refGame(Player * player1, Player * player2)
{   
    Anno anno;
    
    human_name=player1->getName();
    pc_name   =player2->getName();
    pc_move   =player2->getMove();

    Move* move[1];

    move[0]->makeMove();

    anno.checkwin(move[1]->checkMove(pc_move),human_name,pc_name);

    return 0;
}
