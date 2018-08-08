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
    Weapon *w_ch = new Weapon(10, 50);
    Character *ch = new Character(158, 55);
    ch->describe();
    ch->setWeapon(*w_ch);
    cout << ch->getHealth() << endl;
    delete ch;
    cout << endl << endl;


    Warrior *war = new Warrior(15,87);
    war->describe();
    war->setWeapon(*w_ch);
    cout << war->getHealth() << endl;
    delete war;
    cout << endl << endl;

    Rouge *rog = new Rouge(100,43);
    rog->describe();
    rog->setWeapon(*w_ch);
    cout << rog->getHealth() << endl;
    delete rog;
    cout << endl << endl;

    Wizard *wiz = new Wizard(99999,99999);
    wiz->describe();
    wiz->setWeapon(*w_ch);
    cout << wiz->getHealth() << endl;
    delete wiz;
    cout << endl << endl;

    return 0;
}