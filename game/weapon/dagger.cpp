#include <iostream>
#include "dagger.h"

using namespace std;

Dagger::Dagger(int minDmg, int maxDmg) : Weapon(minDmg, maxDmg)
{
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
    cout << "Dagger constructor" << endl;
}

Dagger::~Dagger()
{
    cout << "Dagger destructor" << endl;
}

void Dagger::describe()
{
    cout << "Dagger with min damage: " << minDmg << ", max damage: " << maxDmg << endl;
    cout << "Average damage: " << get_avg() << endl;
}

int Dagger::get_avg()
{
    return (minDmg + maxDmg) / 2;
}