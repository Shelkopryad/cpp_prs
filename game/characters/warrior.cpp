#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"

using namespace std;

Warrior::Warrior(int health, int strength) : Character(health, strength, agility, mind)
{
    this->health = health;
    this->strength = strength;
    cout << "Warrior constructor" << endl;
}

Warrior::~Warrior()
{
    cout << "Warrior destructor" << endl;
}

void Warrior::describe()
{
    cout << "Warrior life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}