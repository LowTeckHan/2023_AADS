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
    Move* move[1];
    
    human_name=player1->getName();
    pc_name   =player2->getName();
    pc_move   =player2->getMove();

    move[0]->makeMove();

    anno.checkwin(move[0]->checkMove(pc_move),human_name,pc_name);

    delete[] move[0];

    return 0;
}
