#include <iostream>
#include <string>
#include "game/characters/character.h"
#include "game/characters/warrior.h"
#include "game/characters/rouge.h"
#include "game/characters/wizard.h"
#include "game/weapon/weapon.h"

using namespace std;

int main() 
{
    int health;
    int strength;
    int agility;
    int mind;
    int min;
    int max;
    cout << "Enter min and max for weapon" << endl;
    cin >> min >> max;
    Weapon *w_ch = new Weapon(min, max);

    while (true) {
        cout << "select character" << endl;
        int character;
        cin >> character;
        switch (character) {
            case 1: {
                cout << "Enter health and strenth for warrior" << endl;
                cin >> health >> strength;
                Warrior *war = new Warrior(health, strength);
                war->describe();
                war->setWeapon(*w_ch);
                cout << war->getHealth() << endl;
                delete war;
                cout << endl << endl;
                break;
            }
                
            case 2: {
                cout << "Enter health and agility for rouge" << endl;
                cin >> health >> agility;
                Rouge *rog = new Rouge(health, agility);
                rog->describe();
                rog->setWeapon(*w_ch);
                cout << rog->getHealth() << endl;
                delete rog;
                cout << endl << endl;
                break;
            }
                
            case 3: {
                cout << "Enter health and mind for wizard" << endl;
                cin >> health >> mind;
                Wizard *wiz = new Wizard(health, mind);
                wiz->describe();
                wiz->setWeapon(*w_ch);
                cout << wiz->getHealth() << endl;
                delete wiz;
                cout << endl << endl;
                break;
            }
                
            default:
                cout << "Try later" << endl;
        }
    }

    return 0;
}