#include <iostream>
#include "staff.h"

using namespace std;

Staff::Staff(int minDmg, int maxDmg) : Weapon(minDmg, maxDmg)
{
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
    cout << "Staff constructor" << endl;
}

Staff::~Staff()
{
    cout << "Staff destructor" << endl;
}

void Staff::describe()
{
    cout << "Staff with min damage: " << minDmg << ", max damage: " << maxDmg << endl;
}