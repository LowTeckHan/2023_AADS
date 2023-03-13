#ifndef Paper_H
#define Paper_H
#include "Move.h"


class Paper : public Move
{
    private:

    public:
        Paper();
        Move *makeMove();
        int checkMove(std::string choice);

};


#endif