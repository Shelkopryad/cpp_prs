#ifndef CPP_PRS_AXE_H
#define CPP_PRS_AXE_H

#include <string>
#include "weapon.h"

using namespace std;

class Axe : public Weapon
{
public:
    Axe(string name, int minDmg, int maxDmg);
    ~Axe();
    void describe();
    int getAvg();
private:
    string name;
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_AXE_H
