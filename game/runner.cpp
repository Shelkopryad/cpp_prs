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
    int health, strength, agility, mind;
    switch (character_type) {
        case 1: {
            cout << "Enter health for warrior: ";
            cin >> health;
            cout << "Enter strength for warrior: ";
            cin >> strength;
            character = new Warrior(health, strength);
            character->describe();
            break;
        }
        case 2: {
            cout << "Enter health for rouge: ";
            cin >> health;
            cout << "Enter agility for rouge: ";
            cin >> agility;
            character = new Rouge(health, agility);
            character->describe();
            break;
        }
        case 3: {
            cout << "Enter health for wizard: ";
            cin >> health;
            cout << "Enter mind for wizard: ";
            cin >> mind;
            character = new Wizard(health, mind);
            character->describe();
            break;
        }
        default:
            cout << "Game over!" << endl;
    }
    return character;
}

int get_character_type()
{
    cout << "Welcome ot the game!" << endl;
    cout << "Search character" << endl;
    cout << "\t1 - Warrior" << endl;
    cout << "\t2 - Rouge" << endl;
    cout << "\t3 - Wizard" << endl;
    int n;
    cin >> n;
    return n;
}

void run()
{
    int character_type = get_character_type();
    Character *character = create_character(character_type);
    delete character;
}