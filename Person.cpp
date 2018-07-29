#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
    cout << "In constructor" << endl;
}

Person::~Person()
{
 cout << "In destructor" << endl;
}