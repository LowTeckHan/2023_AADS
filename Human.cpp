#include "Human.h"
#include<iostream>

using namespace std;

Human::Human()
{
    human_name="Player";
    cout<<human_name<<endl;
}

char Human::makeMove()
{
    cout<<"Enter move: "<<endl;
    cin>>human_move;

}

string Human::getName()
{
    return human_name;
}

char Human::getMove()
{
    return human_move;
}