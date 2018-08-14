#include <iostream>
#include "character.h"
#include "../weapon/weapon.h"

using namespace std;

Character::Character(int level)
{
    this->level = level;
    calculate();
}

Character::~Character() {}

void Character::calculate()
{
    this->health = level * (minValue + 10);
    this->strength = level * minValue + 2;
    this->agility = level * minValue + 2;
    this->mind = level * minValue + 2;
}

void Character::describe() {}

void Character::setWeapon(Weapon *wp)
{
    this->weapon = wp;
    this->weapon->describe();
}

int Character::strike() {}

int Character::getLevel()
{
    return this->level;
}

int Character::getHealth()
{
    return this->health;
}

int Character::getStrength()
{
    return this->strength;
}

int Character::getAgility()
{
    return this->agility;
}

int Character::getMind()
{
    return this->mind;
}