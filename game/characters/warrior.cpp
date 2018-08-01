#include <iostream>
#include "character.h"
#include "warrior.h"

using namespace std;

Warrior::Warrior(int health, int strength) : Character(health, strength)
{
    cout << "Warrior constructor" << endl;
}

Warrior::~Warrior()
{
    cout << "Warrior destructor" << endl;
}

void Warrior::describe()
{
    cout << "Warrior health " << health << ", strange " << strength << endl;
}