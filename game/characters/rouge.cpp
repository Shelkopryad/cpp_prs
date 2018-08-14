#include <iostream>
#include "rouge.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Rouge::Rouge(int level) : Character(level)
{
    this->level = level;
    calculate();
}

Rouge::~Rouge() {}

void Rouge::describe()
{
    cout << "Welcome, Rouge!" << endl;
    cout << "\tLevel: " << this->level << ", life: " << this->health << ", strength: " << this->strength << ", agility: " << this->agility << ", mind: " << this->mind << endl;
}

void Rouge::calculate()
{
    this->health = this->level * (minValue + 22);
    this->agility = this->level * (minValue + 6);
}

int Rouge::strike()
{
    int min = this->agility;
    int max = this->agility + this->weapon->getAvg();
    int damage = getRandomNumber(min, max);
    cout << "Rouge damage = " << damage << endl;
    return damage;
}

int Rouge::getHealth()
{
    return this->health;
}
int Rouge::getAgility()
{
    return this->agility;
}