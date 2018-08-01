#include <iostream>
#include "character.h"

using namespace std;

Character::Character(int health, int strength) : health(health), strength(strength)
{
    cout << "Character constructor" << endl;
}

Character::~Character()
{
    cout << "Character destructor" << endl;
}

void Character::describe() {
    cout << "Character life " << health << ", strange" << strength << endl;
}