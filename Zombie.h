#ifndef Zombie_H
#define Zombie_H 
#include "Move.h"


class Zombie : public Move
{
    private:

    public:
        Zombie();
        ~Zombie();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif