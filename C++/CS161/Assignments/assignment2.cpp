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

/*
Function: check_range()
Description: Tests if test_value is in range of lower, and upper bound
Parameters: lower_boundm test_value, upper_bound 
Pre-Conditions: int inputs
Post-Conditions: bool indicating if test is in range
*/
bool check_range(int lower_bound, int test_value, int upper_bound)
{
    if (lower_bound < test_value < upper_bound)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
Function: is_capital()
Description: Tests is a character is capital
Parameters: char
Pre-Conditions: Char input
Post-Conditions: bool indicating whether input was upper or not
*/
// CHECK IF CHARACTER IS UPPER
bool is_capital(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << false;
    }
    else
    {
        cout << true;
    }
}





int main()
{
    is_capital('a');
}

