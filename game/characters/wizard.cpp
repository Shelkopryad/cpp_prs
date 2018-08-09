#include <iostream>
#include "wizard.h"
#include "../weapon/weapon.h"
#include "../method_helper.h"

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

int Wizard::strike()
{
    int min = this->strength;
    int max = this->strength + this->weapon->get_avg();
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