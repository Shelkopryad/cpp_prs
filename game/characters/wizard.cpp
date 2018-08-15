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
            cout << rougeWeapon << badChoice << endl;
            min = this->agility;
            max = this->agility + this->weapon->getMin();
            break;
        case 3:
            min = this->mind;
            max = this->mind + this->weapon->getRandDmg();
            break;
    }
    damage = getRandomNumber(min, max);
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