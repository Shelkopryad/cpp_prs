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

private:
    int health;
    int agility;
};

#endif //CPP_PRS_ROUGE_H
