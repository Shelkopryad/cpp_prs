#ifndef CPP_PRS_WIZARD_H
#define CPP_PRS_WIZARD_H

#include "character.h"
#include "../weapon/weapon.h"

class Wizard : public Character
{
public:
    Wizard(int health, int mind);
    ~Wizard();
    void describe();

private:
    int health;
    int mind;
};

#endif //CPP_PRS_WIZARD_H
