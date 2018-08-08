#include <iostream>
#include "character.h"
#include "../weapon/weapon.h"

using namespace std;

Character::Character(int health, int strength, int agility, int mind)
{
    this->health = health;
    this->strength = strength;
    this->agility = agility;
    this->mind = mind;
    cout << "Character constructor" << endl;
}

Character::~Character()
{
    cout << "Character destructor" << endl;
}

void Character::setWeapon(Weapon *wp)
{
    wp->describe();
}

void Character::describe() 
{
    cout << "Character life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}

int Character::getHealth()
{
    return health;
}

int Character::getStrength()
{
    return strength;
}