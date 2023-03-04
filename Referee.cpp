#include "Referee.h"
#include"Player.h"
#include <iostream>
#include<string>


using namespace std;

Referee::Referee()
{

}

Player* Referee::refGame(Player * player1, Player * player2)
{
    
    
    player2->makeMove();

    human__move=player2->getMove();

    if(human__move='R')
    {
        return nullptr;
    }

    else if(human__move='P')
    {
        cout<<player2<<" Win"<<endl;
    }

    else if(human__move='S')
    {
        cout<<player1<<" Win" << endl;
    }
}
