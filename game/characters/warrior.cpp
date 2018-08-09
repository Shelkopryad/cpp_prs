#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

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
    int min = this->strength;
    int max = this->strength + this->weapon->get_avg();
    int damage = get_random_number(min, max);
    cout << "Warrior damage = " << damage << endl;
    return damage;
}

int Warrior::get_health()
{
    return this->health;
}

int Warrior::get_strength()
{
    return this->strength;
}