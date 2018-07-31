#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"

class Person
{
    public:
        Person(int id, Birthday bd);
        ~Person();
        void describe();
    protected:
    private:
        int id;
        Birthday bd;

};

#endif // PERSON_H