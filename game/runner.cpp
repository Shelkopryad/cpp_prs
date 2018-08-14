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

Character* create_character(int character_type, int level)
{
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

Weapon* create_weapon(int weapon_type, int level)
{
    vector<string> data;
    switch (weapon_type) {
        case 1: {
            data = getData("./game/resources/axes.txt");
            return create_axe(data, level);
            break;
        }
        case 2: {
            data = getData("./game/resources/daggers.txt");
            return create_dagger(data, level);
            break;
        }
        case 3: {
            data = getData("./game/resources/staff.txt");
            return create_staff(data, level);
            break;
        }
        default:
            return NULL;
    }
}

Weapon* create_axe(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> axe_data = split_string(data[i], ",");
        if (stoi(axe_data[1]) == level)
        {
            return new Axe(axe_data[0], stoi(axe_data[2]), stoi(axe_data[3]));
        }
    }
    return NULL;
}

Weapon* create_dagger(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> dagger_data = split_string(data[i], ",");
        if (stoi(dagger_data[1]) == level)
        {
            return new Dagger(dagger_data[0], stoi(dagger_data[2]), stoi(dagger_data[3]));
        }
    }
    return NULL;
}

Weapon* create_staff(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> staff_data = split_string(data[i], ",");
        if (stoi(staff_data[1]) == level)
        {
            return new Staff(staff_data[0], stoi(staff_data[2]), stoi(staff_data[3]));
        }
    }
    return NULL;
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
    int level;
    cout << "Which level?" << endl;
    cin >> level;
    cout << endl;
    Character *first_character = create_character(first_character_type, level);
    first_character->describe();

    int first_weapon_type = get_weapon_type();
    Weapon *first_weapon = create_weapon(first_weapon_type, level);
    first_character->setWeapon(first_weapon);
    first_character->strike();
    cout << endl;

    delete first_character;
    delete first_weapon;
}