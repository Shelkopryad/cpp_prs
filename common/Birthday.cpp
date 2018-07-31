#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int year, int month, int day) : year(year), month(month), day(day)
{
    cout << "In Birthday constructor" << endl;
}

Birthday::~Birthday()
{
    cout << "In Birthday destructor" << endl;
}

void Birthday::printDate() {
    cout << "Was born in " << year << "/" << month << "/" << day << endl;
}