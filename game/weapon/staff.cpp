#include <iostream>
#include <string>
#include "staff.h"

using namespace std;

Staff::Staff(string name, int minDmg, int maxDmg) : Weapon(name, minDmg, maxDmg)
{
    this->name = name;
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
}

Staff::~Staff() {}

void Staff::describe()
{
    cout << this->name << " with min damage: " << this->minDmg << ", max damage: " << this->maxDmg << endl;
    cout << "Average damage: " << get_avg() << endl;
}

int Staff::get_avg()
{
    return (minDmg + maxDmg) / 2;
}