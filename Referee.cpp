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
    Move *move[2];
    int con;
    
    p1_name = player1->getName();
    p1_move = player1->getMove();
    p2_name = player2->getName();
    p2_move = player2->getMove();

    move[0]->makeMove(p1_move);
    move[1]->makeMove(p2_move);
    con=move[0]->checkMove(p2_move);

    anno.checkwin(con, p1_name, p2_name);


    return 0;
}
