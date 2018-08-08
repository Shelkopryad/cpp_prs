#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

#include "../weapon/weapon.h"

class Character
{
public:
    Character(int health, int strength, int agility, int mind);
    virtual ~Character();
    virtual void describe();
    virtual int strike();
    void setWeapon(Weapon *wp);
    int getHealth();
    int getStrength();
    
protected:
    int health;
    int strength;
    int agility;
    int mind;
    Weapon *weapon;
    static const int min_value = 10;
};

#endif //CPP_PRS_CHARACTER_H
