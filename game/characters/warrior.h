#ifndef CPP_PRS_WARRIOR_H
#define CPP_PRS_WARRIOR_H

#include "character.h"

class Warrior : public Character
{
public:
    Warrior(int health, int strength);
    ~Warrior();
    void describe();

private:
    int health;
    int strength;
};

#endif //CPP_PRS_WARRIOR_H
