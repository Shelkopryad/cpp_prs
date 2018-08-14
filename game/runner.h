#ifndef RUNNER_H
#define RUNNER_H

#include <vector>

#include "characters/character.h"

using namespace std;

int getCharacterType();
int getWeaponType();
Character* createCharacter(int characterType, int level);
Weapon* createWeapon(int weaponType, int level);
Weapon* createAxe(vector<string> data, int level);
Weapon* createDagger(vector<string> data, int level);
Weapon* createStaff(vector<string> data, int level);
void run();

#endif // RUNNER_H