#include <iostream>
#include "weapon.h"

using namespace std;

Weapon::Weapon(string name, int minDmg, int maxDmg) : name(name), minDmg(minDmg), maxDmg(maxDmg) {}

Weapon::~Weapon() {}

void Weapon::describe()
{
    cout << "Weapon: " << name << " with dmg [" << minDmg << "-" << maxDmg << "]" << endl;
}

int Weapon::get_avg()
{
    return (minDmg + maxDmg) / 2;
}