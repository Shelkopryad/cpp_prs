#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(int id, int age) : regID(id), regAge(age)
{
    cout << "In constructor" << endl;
}

Person::~Person()
{
    cout << "In destructor" << endl;
}

void Person::describe() {
    cout << "My id is " << regID << ", age " << regAge << endl;
}