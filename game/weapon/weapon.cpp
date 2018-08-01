#include <iostream>
#include "weapon.h"

using namespace std;

Weapon::Weapon(int minDmg, int maxDmg) : minDmg(minDmg), maxDmg(maxDmg)
{
    cout << "Weapon with dmg [" << minDmg << "-" << maxDmg << "] created" << endl;
}

Weapon::~Weapon()
{
    cout << "Weapon destroyed" << endl;
}

void Weapon::describe()
{
    cout << "Weapon with dmg [" << minDmg << "-" << maxDmg << "]" << endl;
}