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

Character* createCharacter(int characterType, int level)
{
    switch (characterType) {
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

Weapon* createWeapon(int weaponType, int level)
{
    vector<string> data;
    switch (weaponType) {
        case 1: {
            data = getData("./game/resources/axes.txt");
            return createAxe(data, level);
            break;
        }
        case 2: {
            data = getData("./game/resources/daggers.txt");
            return createDagger(data, level);
            break;
        }
        case 3: {
            data = getData("./game/resources/staff.txt");
            return createStaff(data, level);
            break;
        }
        default:
            return NULL;
    }
}

Weapon* createAxe(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> axeData = splitString(data[i], ",");
        if (stoi(axeData[1]) == level)
        {
            return new Axe(axeData[0], stoi(axeData[2]), stoi(axeData[3]));
        }
    }
    return NULL;
}

Weapon* createDagger(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> daggerData = splitString(data[i], ",");
        if (stoi(daggerData[1]) == level)
        {
            return new Dagger(daggerData[0], stoi(daggerData[2]), stoi(daggerData[3]));
        }
    }
    return NULL;
}

Weapon* createStaff(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> staffData = splitString(data[i], ",");
        if (stoi(staffData[1]) == level)
        {
            return new Staff(staffData[0], stoi(staffData[2]), stoi(staffData[3]));
        }
    }
    return NULL;
}

int getCharacterType()
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

int getWeaponType()
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
    int characterType = getCharacterType();
    int level;
    cout << "Which level?" << endl;
    cin >> level;
    cout << endl;
    Character *character = createCharacter(characterType, level);
    character->describe();

    int weaponType = getWeaponType();
    Weapon *weapon = createWeapon(weaponType, level);
    character->setWeapon(weapon);
    character->strike();
    cout << endl;

    delete character;
    delete weapon;
}