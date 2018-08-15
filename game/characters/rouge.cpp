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
    int weaponMainStat = this->weapon->getMainStat();
    int min, max, damage;

    switch(weaponMainStat)
    {
        case 1:
            cout << warriorWeapon << badChoice << endl;
            min = this->strength;
            max = this->strength + this->weapon->getMin();
            break;
        case 2:
            min = this->agility;
            max = this->agility + this->weapon->getAvg();
            break;
        case 3:
            cout << wizardWeapon << badChoice << endl;
            min = this->mind;
            max = this->mind + this->weapon->getMin();
            break;
    }
    damage = getRandomNumber(min, max);
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