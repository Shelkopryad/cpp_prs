#include <iostream>
#include "character.h"
#include "../weapon/weapon.h"

using namespace std;

Character::Character(int level)
{
    this->level = level;
    calculate();
    cout << "Character constructor" << endl;
}

Character::~Character()
{
    cout << "Character destructor" << endl;
}

void Character::setWeapon(Weapon *wp)
{
    this->weapon = wp;
    wp->describe();
}

void Character::describe() 
{
    cout << "Character level: " << level << ", life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}

void Character::calculate()
{
    this->health = level * (min_value + 10);
    this->strength = level * min_value + 2;
    this->agility = level * min_value + 2;
    this->mind = level * min_value + 2;
}

int Character::strike()
{
    int weapon_average = this->weapon->get_avg();
    int character_avg = (this->strength + weapon_average) / 2;
    cout << "Character average damage = " << character_avg << endl;
    return character_avg;
}

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