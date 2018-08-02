#include <iostream>
#include "character.h"
#include "../weapon/weapon.h"

using namespace std;

Character::Character(int health, int strength)
{
    this->health = health;
    this->strength = strength;
    cout << "Character constructor" << endl;
}

Character::~Character()
{
    cout << "Character destructor" << endl;
}

void Character::setWeapon(Weapon wp)
{
    wp.describe();
}

void Character::describe() {
    cout << "Character life " << health << ", strength " << strength << endl;
}