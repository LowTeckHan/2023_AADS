#ifndef Pirate_H
#define Pirate_H 
#include "Move.h"


class Pirate : public Move
{
    private:

    public:
        Pirate();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif