#include <iostream>
#include "wizard.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Wizard::Wizard(int level) : Character(level)
{
    this->level = level;
    calculate();
}

Wizard::~Wizard() {}

void Wizard::describe()
{
    cout << "Welcome, Wizard!" << endl;
    cout << "\tLevel: " << this->level << ", life: " << this->health << ", strength: " << this->strength << ", agility: " << this->agility << ", mind: " << this->mind << endl;
}

void Wizard::calculate()
{
    this->health = this->level * (minValue + 23);
    this->mind = this->level * (minValue + 8);
}

int Wizard::strike()
{
    int min = this->mind;
    int max = this->mind + this->weapon->getAvg();
    int damage = getRandomNumber(min, max);
    cout << "Wizard damage = " << damage << endl;
    return damage;
}

int Wizard::getHealth()
{
    return this->health;
}

int Wizard::getMind()
{
    return this->mind;
}