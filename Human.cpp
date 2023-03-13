#include "Human.h"
#include<iostream>

using namespace std;



Move* Human::makeMove()
{
    cout<<"Enter move: "<<endl;
    cin>>human_move;

    return 0;
}

string Human::getName()
{
    return human_name;
}

string Human::getMove()
{
    return human_move;
}

Human::Human(string name)
{
    human_name=name;
}

Human::Human()
{
    
}