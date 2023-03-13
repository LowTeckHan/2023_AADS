#ifndef Scissors_H
#define Scissors_H 
#include "Move.h"


class Scissors : public Move
{
    private:

    public:
        Scissors();

        Move *makeMove();
        int checkMove(std::string choice);

};


#endif