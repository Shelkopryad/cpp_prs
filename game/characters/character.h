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
    int get_level();
    int get_health();
    int get_strength();
    int get_agility();
    int get_mind();
    void setWeapon(Weapon *wp);
    
protected:
    int level;
    int health;
    int strength;
    int agility;
    int mind;
    Weapon *weapon;
    static const int min_value = 3;
};

#endif //CPP_PRS_CHARACTER_H
