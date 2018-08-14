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
    this->health = level * (min_value + 10);
    this->strength = level * min_value + 2;
    this->agility = level * min_value + 2;
    this->mind = level * min_value + 2;
}

void Character::describe() {}

void Character::setWeapon(Weapon *wp)
{
    this->weapon = wp;
    this->weapon->describe();
}

int Character::strike() {}

int Character::get_level()
{
    return this->level;
}

int Character::get_health()
{
    return this->health;
}

int Character::get_strength()
{
    return this->strength;
}

int Character::get_agility()
{
    return this->agility;
}

int Character::get_mind()
{
    return this->mind;
}