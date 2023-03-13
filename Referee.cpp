#include "Referee.h"
#include"Player.h"
#include "Move.h"
#include "Announcement.h"
#include <iostream>
#include<string>
#include<vector>


using namespace std;

Referee::Referee()
{

}

Player* Referee::refGame(Player * player1, Player * player2)
{   
    Anno anno;
    Move* move;
    int temp;
    
    human_name=player1->getName();
    human_move=player1->getMove();
    pc_name   =player2->getName();
    pc_move   =player2->getMove();

    move->makeMove(human_move);
    temp=move->checkMove(pc_move);

    anno.checkwin(temp,human_name,pc_name);

    delete[] move;

    return 0;
}
