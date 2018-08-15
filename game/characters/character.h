#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

#include <string>

#include "../weapon/weapon.h"

using namespace std;

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
    static constexpr const char* badChoice = "Damage will be decreased!";
    static constexpr const char* warriorWeapon = "This is weapon for Warrior!\n";
    static constexpr const char* rougeWeapon = "This is weapon for Rouge!\n";
    static constexpr const char* wizardWeapon = "This is weapon for Wizard!\n";
};

#endif //CPP_PRS_CHARACTER_H
