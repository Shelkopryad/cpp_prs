#ifndef CPP_PRS_WARRIOR_H
#define CPP_PRS_WARRIOR_H

#include "character.h"

class Warrior : public Character
{
public:
    Warrior(int health, int strange);
    ~Warrior();
    void describe();

private:
    int health;
    int strange;
};

#endif //CPP_PRS_WARRIOR_H
