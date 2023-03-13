#ifndef Pirate_H
#define Pirate_H 
#include "Move.h"


class Pirate : public Move
{
    private:

    public:
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif