#include <iostream>
#include <string>
#include "dagger.h"

using namespace std;

Dagger::Dagger(string name, int minDmg, int maxDmg) : Weapon(name, minDmg, maxDmg)
{
    this->name = name;
    this->minDmg = minDmg;
    this->maxDmg = maxDmg;
}

Dagger::~Dagger() {}

void Dagger::describe()
{
    cout << this->name << " with min damage: " << this->minDmg << ", max damage: " << this->maxDmg << endl;
    cout << "Average damage: " << get_avg() << endl;
}

int Dagger::get_avg()
{
    return (minDmg + maxDmg) / 2;
}