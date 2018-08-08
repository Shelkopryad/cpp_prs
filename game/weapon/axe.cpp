#include <iostream>
#include <string>
#include "axe.h"

using namespace std;

Axe::Axe(int minDmg, int maxDmg) : Weapon(minDmg, maxDmg)
{
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
    cout << "Axe constructor" << endl;
}

Axe::~Axe()
{
    cout << "Axe destructor" << endl;
}

void Axe::describe()
{
    cout << "Axe with min damage: " << minDmg << ", max damage: " << maxDmg << endl;
    cout << "Average damage: " << get_avg() << endl;
}

int Axe::get_avg()
{
    return (minDmg + maxDmg) / 2;
}