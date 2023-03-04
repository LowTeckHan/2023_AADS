#ifndef Player_H
#define Player_H
#include<string>

using namespace std;


class Player
{
    public:
        virtual char makeMove();
        virtual string getName();
        Player();
        virtual char getMove();
  

};

#endif