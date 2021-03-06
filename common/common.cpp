#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Person.h"
#include "Birthday.h"

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

void createPerson()
{
    Birthday bd(1989, 10, 10);
    Person person(54843151, bd);
    person.describe();
}

void doNumbers()
{
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
}

void calc()
{
    int a, b, result;
    char c;
    cout << "Expression:" << endl;
    cin >> a >> c >> b;

    switch(c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "WTF!!!?";
    }

    cout << a << c << b << "=" << result << endl;
}

void createVector()
{
    vector<string> names;
    for (int i = 0; i < 5; i++) {
        string name;
        cin >> name;
        names.push_back(name);
    }

    unsigned int vector_size = names.size();

    for (int i = 0; i < vector_size; i++) {
        std::cout << names[i] << std::endl; 
    }
}

void print(double d)
{
    cout << d << endl;
    system("pause");
}

template<class T> T conc(T v1, T v2)
{
    return v1 + v2;
}