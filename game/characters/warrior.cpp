#include <iostream>
#include "warrior.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Warrior::Warrior(int level) : Character(level)
{
    this->level = level;
    calculate();
}

Warrior::~Warrior() {}

void Warrior::describe()
{
    cout << "Welcome, Warrior!" << endl;
    cout << "\tLevel: " << this->level << ", life: " << this->health << ", strength: " << this->strength << ", agility: " << this->agility << ", mind: " << this->mind << endl;
}

void Warrior::calculate()
{
    this->health = level * (minValue + 25);
    this->strength = level * (minValue + 4);
} 

int Warrior::strike()
{
    int weaponMainStat = this->weapon->getMainStat();
    int min, max, damage;

    switch(weaponMainStat)
    {
        case 1:
            min = this->strength;
            max = this->strength + this->weapon->getRandDmg();
            break;
        case 2:
            cout << rougeWeapon << badChoice << endl;
            min = this->agility;
            max = this->agility + this->weapon->getMin();
            break;
        case 3:
            cout << wizardWeapon << badChoice << endl;
            min = this->mind;
            max = this->mind + this->weapon->getMin();
            break;
    }
    damage = getRandomNumber(min, max);
    cout << "Warrior damage = " << damage << endl;
    return damage;
}

int Warrior::getHealth()
{
    return this->health;
}

int Warrior::getStrength()
{
    return this->strength;
}