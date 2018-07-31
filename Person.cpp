#include <iostream>
#include "Person.h"
#include "Birthday.h"

using namespace std;

Person::Person(int id, Birthday bd) : id(id), bd(bd)
{
    cout << "In Person constructor" << endl;
}

Person::~Person()
{
    cout << "In Person destructor" << endl;
}

void Person::describe() {
    cout << "My id is " << id << endl;
    bd.printDate();
}