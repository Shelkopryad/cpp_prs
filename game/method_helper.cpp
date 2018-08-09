#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <ctime>
#include <string>

#include "method_helper.h"

using namespace std;

int get_random_number(int min, int max)
{
    srand( time( 0 ) );
    return min + rand() % (max-min+1);
}

void describe_character(Character *ch)
{
    string char_type = typeid(*ch).name();
    cout << "Welcome, " << char_type.substr(1) << "!" << endl;
    cout 
        << "\tLevel: " << static_cast<int>(ch->get_level()) 
        << ", life: " << static_cast<int>(ch->get_health()) 
        << ", strength: " << static_cast<int>(ch->get_strength()) 
        << ", agility: " << static_cast<int>(ch->get_agility()) 
        << ", mind: " << static_cast<int>(ch->get_mind()) << endl;
}