#include <iostream>
#include <string>
#include <cstring>
#include <vector>
// #include "game/runner.h"

#include "game/method_helper.h"

using namespace std;

struct Student
{
    string name;
    int age;
    int score;
    int id;
};


int main() 
{
    // run();

    int num;
    cin >> num;

    vector<string> mv = getData();
    vector<string> params = split_string(mv[num], ",");

    Student student;
    student.name = params[0];
    student.age = stoi(params[1]);
    student.score = stoi(params[2]);
    student.id = stoi(params[3]);
    cout << "Student " << student.name << ", age = " << student.age << ", score = " << student.score << ", id = " << student.id << endl;
        

 
    
    
    return 0;
}