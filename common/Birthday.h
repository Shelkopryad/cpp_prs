#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
    public:
        Birthday(int year, int month, int day);
        ~Birthday();
        void printDate();
    protected:
    private:
        int year;
        int month;
        int day;

};

#endif // BIRTHDAY_H