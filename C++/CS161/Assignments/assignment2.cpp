/*
Program: assignment1.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Simple program to calculate take home pay after deductions and taxes for a car salesman
*/

#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>

using namespace std; // now we don't have to affix inputs / outputs with std::cout etc...

int check_range(int lower_bound, int upper_bound, int test_value)
{
    if (lower_bound < test_value < upper_bound)
    {
        return << test_value << "is between " << lower_bound << " and " << upper_bound << endl;
    }
    else
    {
        return << test_value << "is not between " << lower_bound << " and " << upper_bound << endl;
    }
}


int main()
{
    return 0;
}

