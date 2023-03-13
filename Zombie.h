#ifndef Zombie_H
#define Zombie_H 
#include "Move.h"


class Zombie : public Move
{
    private:

    public:
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif