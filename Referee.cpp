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
    
    player1->makeMove();

    human__move=player1->getMove();

    if(human__move=='R')
    {
        return nullptr;
    }

    else if(human__move=='P')
    {
        cout<<"Computer"<<endl;
    }

    else if(human__move=='S')
    {
        cout<<"Human"<< endl;
    }

    return 0;
}
