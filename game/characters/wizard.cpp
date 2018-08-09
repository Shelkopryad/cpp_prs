#include <iostream>
#include "wizard.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

using namespace std;

Wizard::Wizard(int level) : Character(level)
{
    this->level = level;
    calculate();
    cout << "Wizard constructor" << endl;
}

Wizard::~Wizard()
{
    cout << "Wizard destructor" << endl;
}

void Wizard::describe()
{
    cout << "Wizard level: " << level << ", life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}

void Wizard::calculate()
{
    this->health = this->level * (min_value + 23);
    this->mind = this->level * (min_value + 8);
}

int Wizard::strike()
{
    int min = this->mind;
    int max = this->mind + this->weapon->get_avg();
    int damage = get_random_number(min, max);
    cout << "Wizard damage = " << damage << endl;
    return damage;
}

int Wizard::get_health()
{
    return this->health;
}

int Wizard::get_mind()
{
    return this->mind;
}