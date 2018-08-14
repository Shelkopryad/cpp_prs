#ifndef CPP_PRS_WEAPON_H
#define CPP_PRS_WEAPON_H

#include <string>

using namespace std;

class Weapon
{
public:
    Weapon(string name, int minDmg, int maxDmg);
    virtual ~Weapon();
    virtual void describe();
    virtual int getAvg();
private:
    string name;
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_WEAPON_H
