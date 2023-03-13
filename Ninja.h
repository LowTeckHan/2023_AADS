#ifndef Ninja_H
#define Ninja_H 
#include "Move.h"


class Ninja : public Move
{
    private:

    public:
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif