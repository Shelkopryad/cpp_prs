#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"

using namespace std;

Warrior::Warrior(int health, int strength) : Character(health, strength, min_value, min_value)
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

int Warrior::strike()
{
    int weapon_average = this->weapon->get_avg();
    int character_avg = (this->strength + weapon_average) / 2;
    cout << "Warrior average damage = " << character_avg << endl;
    return character_avg;
}

int Warrior::get_health()
{
    return this->health;
}

int Warrior::get_strength()
{
    return this->strength;
}