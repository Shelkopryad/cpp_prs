#ifndef CPP_PRS_DAGGER_H
#define CPP_PRS_DAGGER_H

#include <string>
#include "weapon.h"

using namespace std;

class Dagger : public Weapon
{
public:
    Dagger(string name, int minDmg, int maxDmg);
    ~Dagger();
    void describe();
    int get_avg();
private:
    string name;
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_DAGGER_H
