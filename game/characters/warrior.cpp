#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"

using namespace std;

Warrior::Warrior(int health, int strength) : Character(health, strength)
{
    this->health = health;
    this->strength = strength;
    cout << "Warrior constructor" << endl;
}

Warrior::~Warrior()
{
    cout << "Warrior destructor" << endl;
}

void Warrior::setWeapon(Weapon wp)
{
    wp.describe();
}

void Warrior::describe()
{
    cout << "Warrior health " << health << ", strength " << strength << endl;
}