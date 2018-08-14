#include <iostream>
#include "runner.h"
#include "characters/warrior.h"
#include "characters/rouge.h"
#include "characters/wizard.h"
#include "method_helper.h"

using namespace std;

int setTypeIfUndefined(int type)
{
    if (type != 1 && type != 2 && type != 3)
    {
        cout << "Undefined character or weapon type." << endl;
        type = getRandomNumber(1, 3);
    }
    return type;
}

Character* createCharacter(int characterType, int level)
{
    
    characterType = setTypeIfUndefined(characterType);
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
    weaponType = setTypeIfUndefined(weaponType);
    vector<string> data;
    switch (weaponType) {
        case 1: {
            data = getData("./game/resources/axes.txt");
            break;
        }
        case 2: {
            data = getData("./game/resources/daggers.txt");
            break;
        }
        case 3: {
            data = getData("./game/resources/staff.txt");
            break;
        }
    }
    return createWeaponSpecificType(data, level);
}

Weapon* createWeaponSpecificType(vector<string> data, int level)
{
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> weaponData = splitString(data[i], ",");
        if (stoi(weaponData[1]) == level)
        {
            return new Weapon(weaponData[0], stoi(weaponData[2]), stoi(weaponData[3]));
        }
    }
    return NULL;
}

int getCharacterType()
{
    cout << "Welcome to the game!" << endl;
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