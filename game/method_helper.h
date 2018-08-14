#ifndef METHOD_HELPER_H
#define METHOD_HELPER_H

#include <string>
#include <vector>

using namespace std;

int getRandomNumber(int min, int max);
vector<string> getData(const string filePath);
vector<string> splitString(string data, const char *separator);


#endif // METHOD_HELPER_H