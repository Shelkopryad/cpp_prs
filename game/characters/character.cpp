#include <iostream>
#include "character.h"

using namespace std;

Character::Character(int health, int strange) : health(health), strange(strange)
{
    cout << "Character constructor" << endl;
}

Character::~Character()
{
    cout << "Character destructor" << endl;
}

void Character::describe() {
    cout << "Character life " << health << ", strange" << strange << endl;
}