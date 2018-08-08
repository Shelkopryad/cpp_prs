#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

#include "../weapon/weapon.h"

class Character
{
public:
    Character(int health, int strength, int agility, int mind);
    ~Character();
    void describe();
    void setWeapon(Weapon wp);
    int getHealth();
    int getStrength();
protected:
    int health;
    int strength;
    int agility;
    int mind;
};

#endif //CPP_PRS_CHARACTER_H
