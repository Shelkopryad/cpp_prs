#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Warrior::Warrior(int level) : Character(level)
{
    this->level = level;
    calculate();
    cout << "Warrior constructor" << endl;
}

Warrior::~Warrior()
{
    cout << "Warrior destructor" << endl;
}

void Warrior::describe()
{
    cout << "Welcome, Warrior!" << endl;
    cout << "\tLevel: " << this->level << ", life: " << this->health << ", strength: " << this->strength << ", agility: " << this->agility << ", mind: " << this->mind << endl;
}

void Warrior::calculate()
{
    this->health = level * (min_value + 25);
    this->strength = level * (min_value + 4);
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