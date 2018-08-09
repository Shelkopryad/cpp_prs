#ifndef CPP_PRS_WARRIOR_H
#define CPP_PRS_WARRIOR_H

#include "character.h"
#include "../weapon/weapon.h"

class Warrior : public Character
{
public:
    Warrior(int level);
    ~Warrior();
    void describe();
    void calculate();
    int strike();
    int get_level();
    int get_health();
    int get_strength();

private:
    int level;
    int health;
    int strength;
};

#endif //CPP_PRS_WARRIOR_H
