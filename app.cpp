#include <iostream>
#include <string>
#include "game/characters/warrior.h"
#include "game/characters/rouge.h"
#include "game/characters/wizard.h"
#include "game/weapon/weapon.h"
#include "game/weapon/axe.h"
#include "game/weapon/dagger.h"
#include "game/weapon/staff.h"

using namespace std;

int main() 
{
    int health;
    int strength;
    int agility;
    int mind;
    int min;
    int max;

    cout << "Enter min damage for axe: ";
    cin >> min;
    cout << "Enter max damage for axe: ";
    cin >> max;
    Axe *w_axe = new Axe(min, max);
    w_axe->describe();
    cout << endl;

    cout << "Enter health for warrior: ";
    cin >> health;
    cout << "Enter strength for warrior: ";
    cin >> strength;
    Warrior *war = new Warrior(health, strength);
    war->describe();
    war->setWeapon(w_axe);
    cout << endl;

    cout << "Enter min damage for staff: ";
    cin >> min;
    cout << "Enter max damage for staff: ";
    cin >> max;
    Staff *w_staff = new Staff(min, max);
    w_staff->describe();
    cout << endl;

    cout << "Enter health for wizard: ";
    cin >> health;
    cout << "Enter mind for wizard: ";
    cin >> mind;
    Wizard *wiz = new Wizard(health, mind);
    wiz->describe();
    wiz->setWeapon(w_staff);
    cout << endl;


    delete war;
    delete wiz;
    delete w_axe;
    delete w_staff;




    // while (true) {
    //     cout << "select character" << endl;
    //     int character;
    //     cin >> character;
    //     switch (character) {
    //         case 1: {
    //             cout << "Enter health and strenth for warrior" << endl;
    //             cin >> health >> strength;
    //             Warrior *war = new Warrior(health, strength);
    //             war->describe();
    //             war->setWeapon(*w_ch);
    //             cout << war->getHealth() << endl;
    //             delete war;
    //             cout << endl << endl;
    //             break;
    //         }
                
    //         case 2: {
    //             cout << "Enter health and agility for rouge" << endl;
    //             cin >> health >> agility;
    //             Rouge *rog = new Rouge(health, agility);
    //             rog->describe();
    //             rog->setWeapon(*w_ch);
    //             cout << rog->getHealth() << endl;
    //             delete rog;
    //             cout << endl << endl;
    //             break;
    //         }
                
    //         case 3: {
    //             cout << "Enter health and mind for wizard" << endl;
    //             cin >> health >> mind;
    //             Wizard *wiz = new Wizard(health, mind);
    //             wiz->describe();
    //             wiz->setWeapon(*w_ch);
    //             cout << wiz->getHealth() << endl;
    //             delete wiz;
    //             cout << endl << endl;
    //             break;
    //         }
                
    //         default:
    //             cout << "Try later" << endl;
    //     }
    // }

    return 0;
}