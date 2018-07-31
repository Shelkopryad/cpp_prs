#ifndef CPP_PRS_CHARACTER_H
#define CPP_PRS_CHARACTER_H

class Character
{
public:
    Character(int health, int strange);
    ~Character();
    void describe();
private:
    int health;
    int strange;
};

#endif //CPP_PRS_CHARACTER_H
