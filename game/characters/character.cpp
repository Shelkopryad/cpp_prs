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
    this->weapon = wp;
    wp->describe();
}

void Character::describe() 
{
    cout << "Character life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}

int Character::strike()
{
    int weapon_average = this->weapon->get_avg();
    int character_avg = (this->strength + weapon_average) / 2;
    cout << "Character average damage = " << character_avg << endl;
    return character_avg;
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