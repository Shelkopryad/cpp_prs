#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

class Character
{
public:
    Character(int health, int strength);
    ~Character();
    void describe();
private:
    int health;
    int strength;
};

#endif //CPP_PRS_CHARACTER_H
