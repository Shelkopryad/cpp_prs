#ifndef CPP_PRS_WARRIOR_H
#define CPP_PRS_WARRIOR_H

#include "character.h"
#include "../weapon/weapon.h"

class Warrior : public Character
{
public:
    Warrior(int health, int strength);
    ~Warrior();
    void describe();
    void setWeapon(Weapon wp);

private:
    int health;
    int strength;
};

#endif //CPP_PRS_WARRIOR_H
