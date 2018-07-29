#ifndef PERSON_H
#define PERSON_H

class Person
{
    public:
        Person(int id, int age);
        ~Person();
        void describe();
    protected:
    private:
        const int regID;
        int regAge;

};

#endif // PERSON_H