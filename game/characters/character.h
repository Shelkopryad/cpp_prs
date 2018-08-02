#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

#include "../weapon/weapon.h"

class Character
{
public:
    Character(int health, int strength);
    ~Character();
    void describe();
    void setWeapon(Weapon wp);
protected:
    int health;
    int strength;
};

#endif //CPP_PRS_CHARACTER_H
