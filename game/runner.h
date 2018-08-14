#ifndef RUNNER_H
#define RUNNER_H

#include <vector>

#include "characters/character.h"

using namespace std;

int get_character_type();
int get_weapon_type();
Character* create_character(int character_type, int level);
Weapon* create_weapon(int weapon_type, int level);
Weapon* create_axe(vector<string> data, int level);
Weapon* create_dagger(vector<string> data, int level);
Weapon* create_staff(vector<string> data, int level);
void run();

#endif // RUNNER_H