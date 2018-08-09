#include <iostream>
#include "rouge.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Rouge::Rouge(int level) : Character(level)
{
    this->level = level;
    calculate();
    cout << "Rouge constructor" << endl;
}

Rouge::~Rouge()
{
    cout << "Rouge destructor" << endl;
}

void Rouge::describe()
{
    cout << "Welcome, Rouge!" << endl;
    cout << "\tLevel: " << this->level << ", life: " << this->health << ", strength: " << this->strength << ", agility: " << this->agility << ", mind: " << this->mind << endl;
}

void Rouge::calculate()
{
    this->health = this->level * (min_value + 22);
    this->agility = this->level * (min_value + 6);
}

int Rouge::strike()
{
    int min = this->agility;
    int max = this->agility + this->weapon->get_avg();
    int damage = get_random_number(min, max);
    cout << "Rouge damage = " << damage << endl;
    return damage;
}

int Rouge::get_health()
{
    return this->health;
}
int Rouge::get_agility()
{
    return this->agility;
}