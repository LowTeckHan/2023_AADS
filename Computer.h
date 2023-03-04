#ifndef Computer_H
#define Computer_H
#include "Player.h"
#include<string> 

using namespace std;

class Computer : public Player
{
    private:

    public:
    string name_pc;
    char move_pc='R';
    Computer();

};


#endif