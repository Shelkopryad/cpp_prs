#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

#include "method_helper.h"


int getRandomNumber(int min, int max)
{
    srand(time(0));
    return min + rand() % (max-min+1);
}

vector<string> getData(const string filePath)
{
    string buff;
    vector<string> data;
    int index;
    ifstream fin;
    fin.open(filePath);
    
    while(!fin.eof())
    {
        getline(fin, buff);

        for (int i = 1; i < buff.length(); i++)
        {
            if (buff[i] == 93)
            {
                break;
            }
            index = i;
        }

        char tmpBuff[index];

        for(int i = 0; i < index; i++)
        {
            tmpBuff[i] = buff[i+1];
        }

        tmpBuff[index] = 0;
        data.push_back(static_cast<string>(tmpBuff));
    }
    
    fin.close();
    return data;
}

vector<string> splitString(string data, const char *separator)
{
    vector<string> result;
    while (true)
    {
        int sepIndex = data.find(separator);
        if (data.find(separator) != string::npos)
        {
            result.push_back(data.substr(0, sepIndex));
        }
        else
        {
            result.push_back(data.substr(sepIndex+1));
            break;
        }
        data = data.substr(sepIndex+1);
    }
    return result;
}