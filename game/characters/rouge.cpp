#include <iostream>
#include "rouge.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Rouge::Rouge(int health, int agility) : Character(health, min_value, agility, min_value)
{
    this->health = health;
    this->agility = agility;
    cout << "Rouge constructor" << endl;
}

Rouge::~Rouge()
{
    cout << "Rouge destructor" << endl;
}

void Rouge::describe()
{
    cout << "Rouge life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}

int Rouge::strike()
{
    int min = this->strength;
    int max = this->strength + this->weapon->get_avg();
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