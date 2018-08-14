#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

#include "../weapon/weapon.h"

class Character
{
public:
    Character(int level);
    virtual ~Character();
    virtual void describe();
    virtual int strike();
    virtual void calculate();
    int getLevel();
    int getHealth();
    int getStrength();
    int getAgility();
    int getMind();
    void setWeapon(Weapon *wp);
    
protected:
    int level;
    int health;
    int strength;
    int agility;
    int mind;
    Weapon *weapon;
    static const int minValue = 3;
};

#endif //CPP_PRS_CHARACTER_H
