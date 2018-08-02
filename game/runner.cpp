#include <iostream>
#include "runner.h"
#include "characters/character.h"
#include "characters/warrior.h"
#include "weapon/weapon.h"

using namespace std;

void setCharacter(int n)
{
    switch (n) {
        case 1: {
            Warrior character(200, 40);
            character.describe();
            Weapon wp(12, 59);
            character.setWeapon(wp);
            break;
        }
        case 2:
            cout << "Rouge" << endl;
            break;
        case 3:
            cout << "Wizard" << endl;
            break;
        default:
            cout << "WTF!!!?" << endl;
    }
}

void run()
{
    cout << "Welcome ot the game!" << endl;
    cout << "Search character" << endl;
    cout << "1 - Warrior" << endl;
    cout << "2 - Rouge" << endl;
    cout << "3 - Wizard" << endl;
    int n;
    cin >> n;
    setCharacter(n);
}