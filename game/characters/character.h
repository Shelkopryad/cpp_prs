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
    int get_health();
    int get_strength();
    int get_agility();
    int get_mind();
    void setWeapon(Weapon *wp);
    
protected:
    int health;
    int strength;
    int agility;
    int mind;
    Weapon *weapon;
    static const int min_value = 10;
};

#endif //CPP_PRS_CHARACTER_H
