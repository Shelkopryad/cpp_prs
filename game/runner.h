#ifndef RUNNER_H
#define RUNNER_H

#include "characters/character.h"

int get_character_type();
Character* create_character(int character_type);
void run();

#endif // RUNNER_H