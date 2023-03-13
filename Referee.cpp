#include "Referee.h"
#include "Player.h"
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
    vector <Move*> move;
    int con;
    
    p1_name = player1->getName();
    p1_move = player1->getMove();
    p2_name = player2->getName();
    p2_move = player2->getMove();


    move.push_back(Move::makeMove(p1_move));
    con=move[0]->checkMove(p2_move);

    anno.checkwin(con, p1_name, p2_name);

    delete[] move[0];

    


    return 0;
}
