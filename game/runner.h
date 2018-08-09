#ifndef RUNNER_H
#define RUNNER_H

#include "characters/character.h"

int get_character_type();
int get_weapon_type();
Character* create_character(int character_type);
Weapon* create_weapon(int weapon_type);
void run();

#endif // RUNNER_H