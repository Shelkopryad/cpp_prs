#ifndef CPP_PRS_STAFF_H
#define CPP_PRS_STAFF_H

#include <string>
#include "weapon.h"

using namespace std;

class Staff : public Weapon
{
public:
    Staff(string name, int minDmg, int maxDmg);
    ~Staff();
    void describe();
    int getAvg();
private:
    string name;
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_STAFF_H
