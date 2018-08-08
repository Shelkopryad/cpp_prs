#include <iostream>
#include "rouge.h"
#include "../weapon/weapon.h"

using namespace std;

Rouge::Rouge(int health, int agility) : Character(health, 10, agility, 10)
{
    this->health = health;
    this->agility = agility;
    cout << "Rouge constructor" << endl;
}

Rouge::~Rouge()
{
    cout << "Rouge destructor" << endl;
}

void Rouge::describe()
{
    cout << "Rouge life: " << health << ", strength: " << strength << ", agility: " << agility << ", mind: " << mind << endl;
}