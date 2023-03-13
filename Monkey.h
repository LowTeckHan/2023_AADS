#ifndef Monkey_H
#define Mokey_H 
#include "Move.h"


class Monkey : public Move
{
    private:

    public:
        Monkey();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif