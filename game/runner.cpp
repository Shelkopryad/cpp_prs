#include <iostream>
#include "runner.h"
#include "characters/warrior.h"
#include "characters/rouge.h"
#include "characters/wizard.h"
#include "weapon/axe.h"
#include "weapon/dagger.h"
#include "weapon/staff.h"

using namespace std;

Character* create_character(int character_type)
{
    Character *character;
    int level;
    switch (character_type) {
        case 1: {
            cout << "Enter level for warrior: ";
            cin >> level;
            character = new Warrior(level);
            character->describe();
            break;
        }
        case 2: {
            cout << "Enter level for rouge: ";
            cin >> level;
            character = new Rouge(level);
            character->describe();
            break;
        }
        case 3: {
            cout << "Enter level for wizard: ";
            cin >> level;
            character = new Wizard(level);
            character->describe();
            break;
        }
        default:
            cout << "Game over!" << endl;
    }
    return character;
}

Weapon* create_weapon(int weapon_type)
{
    Weapon *weapon;
    int min, max, agility, mind;
    switch (weapon_type) {
        case 1: {
            cout << "Enter min for Axe: ";
            cin >> min;
            cout << "Enter max for Axe: ";
            cin >> max;
            weapon = new Axe(min, max);
            weapon->describe();
            break;
        }
        case 2: {
            cout << "Enter min for Dagger: ";
            cin >> min;
            cout << "Enter max for Dagger: ";
            cin >> max;
            weapon = new Dagger(min, max);
            weapon->describe();
            break;
        }
        case 3: {
            cout << "Enter min for Staff: ";
            cin >> min;
            cout << "Enter max for Staff: ";
            cin >> max;
            weapon = new Staff(min, max);
            weapon->describe();
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
    int first_weapon_type = get_weapon_type();
    Weapon *first_weapon = create_weapon(first_weapon_type);
    first_character->setWeapon(first_weapon);
    first_character->strike();
    cout << endl;

    delete first_character;
    delete first_weapon;
}