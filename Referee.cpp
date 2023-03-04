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
        cout<<"Tie"<<endl;;
    }

    else if(human__move=='P')
    {
        cout<<"Human"<<endl;
    }

    else if(human__move=='S')
    {
        cout<<"Computer"<< endl;
    }

    return 0;
}
