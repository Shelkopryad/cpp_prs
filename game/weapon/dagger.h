#ifndef CPP_PRS_DAGGER_H
#define CPP_PRS_DAGGER_H

#include "weapon.h"

class Dagger : public Weapon
{
public:
    Dagger(int minDmg, int maxDmg);
    ~Dagger();
    void describe();
    int get_avg();
private:
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_DAGGER_H
