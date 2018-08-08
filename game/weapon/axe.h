#ifndef CPP_PRS_AXE_H
#define CPP_PRS_AXE_H

#include "weapon.h"

class Axe : public Weapon
{
public:
    Axe(int minDmg, int maxDmg);
    ~Axe();
    void describe();
private:
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_AXE_H
