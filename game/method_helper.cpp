#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

#include "method_helper.h"


int get_random_number(int min, int max)
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

        char tmp_buff[index];

        for(int i = 0; i < index; i++)
        {
            tmp_buff[i] = buff[i+1];
        }

        tmp_buff[index] = 0;
        data.push_back(static_cast<string>(tmp_buff));
    }
    
    fin.close();
    return data;
}

vector<string> split_string(string data, const char *separator)
{
    vector<string> result;
    while (true)
    {
        int sep_index = data.find(separator);
        if (data.find(separator) != string::npos)
        {
            result.push_back(data.substr(0, sep_index));
        }
        else
        {
            result.push_back(data.substr(sep_index+1));
            break;
        }
        data = data.substr(sep_index+1);
    }
    return result;
}