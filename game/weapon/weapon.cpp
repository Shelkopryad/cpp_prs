#include <iostream>
#include "weapon.h"

using namespace std;

Weapon::Weapon(string name, int minDmg, int maxDmg) : name(name), minDmg(minDmg), maxDmg(maxDmg) {}

Weapon::~Weapon() {}

void Weapon::describe()
{
    cout << name << " with dmg [" << minDmg << "-" << maxDmg << "]" << endl;
    cout << "Damage: " << getRandDmg() << endl << endl;;
}

void Weapon::setMainStat(int value)
{
    this->mainStat = value;
}

int Weapon::getMainStat()
{
    return this->mainStat;
}

int Weapon::getMin()
{
    return this->minDmg;
}

int Weapon::getRandDmg()
{
    return getRandomNumber(minDmg, maxDmg);
}