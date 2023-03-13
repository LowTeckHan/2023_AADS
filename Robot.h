#ifndef Robot_H
#define Robot_H 
#include "Move.h"


class Robot : public Move
{
    private:

    public:
        Robot();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif