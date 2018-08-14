#include <iostream>
#include <string>
#include "axe.h"

Axe::Axe(string name, int minDmg, int maxDmg) : Weapon(name, minDmg, maxDmg)
{
    this->name = name;
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
}

Axe::~Axe() {}

void Axe::describe()
{
    cout << this->name << " with min damage: " << this->minDmg << ", max damage: " << this->maxDmg << endl;
    cout << "Average damage: " << get_avg() << endl;
}

int Axe::get_avg()
{
    return (minDmg + maxDmg) / 2;
}