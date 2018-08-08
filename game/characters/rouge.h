#ifndef CPP_PRS_ROUGE_H
#define CPP_PRS_ROUGE_H

#include "character.h"
#include "../weapon/weapon.h"

class Rouge : public Character
{
public:
    Rouge(int health, int agility);
    ~Rouge();
    void describe();
    int strike();
    int get_health();
    int get_agility();

private:
    int health;
    int agility;
};

#endif //CPP_PRS_ROUGE_H
