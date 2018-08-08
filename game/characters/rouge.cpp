#include <iostream>
#include "rouge.h"
#include "../weapon/weapon.h"

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
    int weapon_average = this->weapon->get_avg();
    int character_avg = (this->agility + weapon_average) / 2;
    cout << "Rouge average damage = " << character_avg << endl;
    return character_avg;
}