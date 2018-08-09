#include <iostream>
#include "runner.h"
#include "characters/warrior.h"
#include "characters/rouge.h"
#include "characters/wizard.h"
#include "weapon/axe.h"
#include "weapon/dagger.h"
#include "weapon/staff.h"
#include "method_helper.h"

using namespace std;

Character* create_character(int character_type)
{
    const int level = 15;
    switch (character_type) {
        case 1:
            return new Warrior(level);
            break;
        case 2:
            return new Rouge(level);
            break;
        case 3:
            return new Wizard(level);
            break;
        default:
            cout << "Game over!" << endl;
            return NULL;
    }
}

Weapon* create_weapon(int weapon_type)
{
    Weapon *weapon;
    int min = 100;
    int max = 120;
    switch (weapon_type) {
        case 1: {
            weapon = new Axe(min, max);
            break;
        }
        case 2: {
            weapon = new Dagger(min, max);
            break;
        }
        case 3: {
            weapon = new Staff(min, max);
            break;
        }
        default:
            cout << "Game over!" << endl;
    }
    return weapon;
}

int get_character_type()
{
    cout << "Welcome ot the game!" << endl;
    cout << "Select character" << endl;
    cout << "\t1 - Warrior" << endl;
    cout << "\t2 - Rouge" << endl;
    cout << "\t3 - Wizard" << endl;
    int n;
    cin >> n;
    return n;
}

int get_weapon_type()
{
    cout << "Select weapon" << endl;
    cout << "\t1 - Axe" << endl;
    cout << "\t2 - Dagger" << endl;
    cout << "\t3 - Staff" << endl;
    int n;
    cin >> n;
    return n;
}

void run()
{
    
    int first_character_type = get_character_type();
    Character *first_character = create_character(first_character_type);
    describe_character(first_character);
    // first_character->describe();

    int first_weapon_type = get_weapon_type();
    Weapon *first_weapon = create_weapon(first_weapon_type);
    first_character->setWeapon(first_weapon);
    first_character->strike();
    cout << endl;

    delete first_character;
    delete first_weapon;
}