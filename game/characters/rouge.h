#ifndef CPP_PRS_ROUGE_H
#define CPP_PRS_ROUGE_H

#include "character.h"
#include "../weapon/weapon.h"

class Rouge : public Character
{
public:
    Rouge(int level);
    ~Rouge();
    void describe();
    void calculate();
    int strike();
    int get_health();
    int get_agility();

private:
    int level;
    int health;
    int agility;
};

#endif //CPP_PRS_ROUGE_H
