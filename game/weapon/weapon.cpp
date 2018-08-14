#include <iostream>
#include "weapon.h"

using namespace std;

Weapon::Weapon(string name, int minDmg, int maxDmg) : name(name), minDmg(minDmg), maxDmg(maxDmg) {}

Weapon::~Weapon() {}

void Weapon::describe()
{
    cout << name << " with dmg [" << minDmg << "-" << maxDmg << "]" << endl;
    cout << "Average damage: " << getAvg() << endl << endl;;
}

int Weapon::getAvg()
{
    return (minDmg + maxDmg) / 2;
}