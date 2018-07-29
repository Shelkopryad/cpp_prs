#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"

using namespace std;

int writeFile() 
{
    ofstream fout("cppstudio.txt");
    string content;
    cout << "What do you want to write?" << endl;
    cin >> content;
    fout << content;
    fout.close();
    return 0;
}

void changeNumber(int *a)
{
    *a += 10;
}

void doNotChangeNumber(int a)
{
    a += 10;
}

void doSomethingWithPtr() 
{
    int var;
    cout << "Enter number" << endl;
    cin >> var;
    int *ptrvar = &var;
    doNotChangeNumber(var);
    cout << "var\t" << var << endl;
    changeNumber(ptrvar);
    cout << "var\t" << var << endl;
    changeNumber(&var);
    cout << "var\t" << var << endl;
}

bool doSwitch(char haveFun) 
{
    cout << "Do you want to write a file? (y/n)" << endl;
    cin >> haveFun;

    switch (haveFun) {
        case 'y':
            writeFile();
            return true;
        case 'n':
            doSomethingWithPtr();
            return false;
        default:
            doSwitch(haveFun);
    }
}

int fact(int n)
{
    if (n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int main() 
{
    Person person;
    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Hello " << name << endl;
    bool hf = doSwitch('f');
    if (hf) {
        cout << "File written" << endl;
    } else {
        cout << "File not written" << endl;
    }
    cout << fact(8) << endl;
    return 0;
}