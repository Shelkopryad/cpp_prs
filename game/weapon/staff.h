#ifndef CPP_PRS_STAFF_H
#define CPP_PRS_STAFF_H

#include "weapon.h"

class Staff : public Weapon
{
public:
    Staff(int minDmg, int maxDmg);
    ~Staff();
    void describe();
    int get_avg();
private:
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_STAFF_H
