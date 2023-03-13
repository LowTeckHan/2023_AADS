#ifndef Ninja_H
#define Ninja_H 
#include "Move.h"


class Ninja : public Move
{
    private:

    public:
        Ninja();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif