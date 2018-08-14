#ifndef CPP_PRS_WIZARD_H
#define CPP_PRS_WIZARD_H

#include "character.h"
#include "../weapon/weapon.h"

class Wizard : public Character
{
public:
    Wizard(int level);
    ~Wizard();
    void describe();
    void calculate();
    int strike();
    int getHealth();
    int getMind();

private:
    int level;
    int health;
    int mind;
};

#endif //CPP_PRS_WIZARD_H
