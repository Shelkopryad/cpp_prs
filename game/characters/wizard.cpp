#include <iostream>
#include "wizard.h"
#include "../weapon/weapon.h"

using namespace std;

Wizard::Wizard(int health, int mind) : Character(health, min_value, min_value, mind)
{
    this->health = health;
    this->mind = mind;
    cout << "Wizard constructor" << endl;
}

Wizard::~Wizard()
{
    cout << "Wizard destructor" << endl;
}

void Wizard::describe()
{
    cout << "Wizard life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}