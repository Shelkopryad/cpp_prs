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
    virtual int getMin();
    virtual int getAvg();
    virtual void setMainStat(int value);
    virtual int getMainStat();
private:
    string name;
    int mainStat;
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_WEAPON_H
