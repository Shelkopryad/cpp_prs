#include <iostream>
#include "runner.h"
#include "characters/warrior.h"
#include "characters/rouge.h"
#include "characters/wizard.h"
#include "method_helper.h"

using namespace std;

Character* createCharacter(int characterType, int level)
{
    if (characterType < 1 || characterType > 3)
    {
        cout << "Undefined character type!" << endl; 
        characterType = getRandomNumber(1, 3);
    }
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
    if (weaponType < 1 || weaponType > 6)
    {
        cout << "Undefined weapon type!" << endl; 
        weaponType = getRandomNumber(1, 6);
    }
    vector<string> data;
    switch (weaponType) {
        case 1: {
            data = getData("./game/resources/axes.txt");
            break;
        }
        case 2: {
            data = getData("./game/resources/swords.txt");
            break;
        }
        case 3: {
            data = getData("./game/resources/daggers.txt");
            break;
        }
        case 4: {
            data = getData("./game/resources/bows.txt");
            break;
        }
        case 5: {
            data = getData("./game/resources/staff.txt");
            break;
        }
        case 6: {
            data = getData("./game/resources/wands.txt");
            break;
        }
    }
    return createWeaponSpecificType(data, level);
}

Weapon* createWeaponSpecificType(vector<string> data, int level)
{
    Weapon *weapon;
    for (int i = 0; i < sizeof(data); i++)
    {
        vector<string> weaponData = splitString(data[i], ",");
        if (stoi(weaponData[1]) == level)
        {
            weapon = new Weapon(weaponData[0], stoi(weaponData[3]), stoi(weaponData[4]));
            weapon->setMainStat(stoi(weaponData[2]));
            return weapon;
        }
    }
    return NULL;
}

int getCharacterType()
{
    cout << "Welcome to the game!" << endl;
    cout << "Select character:" << endl;
    cout << "\t1 - Warrior" << endl;
    cout << "\t2 - Rouge" << endl;
    cout << "\t3 - Wizard" << endl;
    int n;
    cin >> n;
    return n;
}

int getWeaponType()
{
    cout << "Select weapon:" << endl;
    cout << "\t1 - Axe" << endl;
    cout << "\t2 - Sword" << endl;
    cout << "\t3 - Dagger" << endl;
    cout << "\t4 - Bow" << endl;
    cout << "\t5 - Staff" << endl;
    cout << "\t6 - Wand" << endl;
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
    // int level = getRandomNumber(1, 10);
    // cout << "level = " << level << endl;
    // getRandomNumber(0, 1000);
    // Character *enemy = createCharacter(getRandomNumber(1, 3), level);
    // enemy->describe();
    // getRandomNumber(0, 1000);
    // Weapon *weapon = createWeapon(getRandomNumber(1, 3), level);
    // enemy->setWeapon(weapon);
    // enemy->strike();

    delete character;
    delete weapon;
    // delete enemy;
    // delete weapon;
}