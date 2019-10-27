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
bool is_capital(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
Function: is_even()
Description: checks if input is even
Parameters: int
Pre-Conditions: int input 
Post-Conditions: bool
*/


/*
Function: is_odd
Description: checks if input is odd
Parameters: int
Pre-Conditions: int input 
Post-Conditions: bool
*/


/*
Function: equality test
Description: checks if two numbers are the same or different and returns different values accordingly
Parameters: num1, num2
Pre-Conditions: int input
Post-Conditions: -1, 0 , 1
*/


/*
Function: is_int
Description: checks if string is int
Parameters: string num
Pre-Conditions: string input
Post-Conditions: bool
*/


/*
Function: numbers_present
Description: Checks if a string contains numbers
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: bool
*/


/*
Function: letters present
Description: Checks if a string contains numbers
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: bool
*/


/*
Function: contains sub string
Description: checks if a substring exists in a sentence
Parameters: string sentence, string substring
Pre-Conditions: string input
Post-Conditions: bool
*/


/*
Function: word count
Description: count how many words are in a given string
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: int
*/


/*
Function: to_upper
Description: converts all letters in a string to uppercase
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: uppercase sentence
*/


/*
Function: to lower
Description: converts all letters in a string to lowercase
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: lowercase sentence
*/


/*
Function: get int
Description: takes string input and checks if its an int and if it is returns aforementioned int
Parameters: string prompt
Pre-Conditions: string input from user
Post-Conditions: int
*/

int main()
{





}

