#include <iostream>
#include <cstdlib>
#include <ctime>

#include "method_helper.h"

using namespace std;

int get_random_number(int min, int max)
{
    srand( time( 0 ) );
    return min + rand() % (max-min+1);
}