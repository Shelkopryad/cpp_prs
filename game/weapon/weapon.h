#ifndef CPP_PRS_WEAPON_H
#define CPP_PRS_WEAPON_H

class Weapon
{
public:
    Weapon(int minDmg, int maxDmg);
    virtual ~Weapon();
    virtual void describe();
private:
    int minDmg;
    int maxDmg;
};

#endif //CPP_PRS_WEAPON_H
