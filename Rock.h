#ifndef Rock_H
#define Rock_H 
#include "Move.h"


class Rock : public Move
{
    private:

    public:
        Rock();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif