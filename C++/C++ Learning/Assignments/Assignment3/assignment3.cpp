/*
Program: assignment3.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Handle Fractions and Produce Fractals
*/

// Imports
#include <iostream>
#include <string>
#include <string.h>

using namespace std;





/*
**************************
PART 1
FRACTION IN LOWEST TERMS
***************************
*/

// Checks is a given string is a number
// Returns true if s == int 
// Returns false if s != int
bool is_number(string s)
{
    // We use a const iterator because we don't want the value inside this function to protect pointed to value
    string::const_iterator it = s.begin(); 
    // Iterate through each character of the string
    while (it != s.end() && isdigit(*it)) ++it;
    //Return
    return !s.empty() && it == s.end();
}

// Gets the numerator of a fraction 
// Returns numerator if numerator is a whole integer
// Continues to prompt user if input is not a whole integer
int get_numerator()
{
    string numerator;
    cout << "Please enter the numerator of your fraction: ";
    cin >> numerator;

    if (is_number(numerator) == true)
    {
        cout << "Your numerator is " << numerator << endl;
        int int_numerator =  atoi(numerator.c_str());
        return int_numerator;
    }
    else
    {
        cout << "Invalid numerator, whole numbers only! No Decimals or letters! " << endl;
        get_numerator();
    }
}


// Gets the denominator of a fraction 
// Returns denominator if denominator is a whole integer
// Continues to prompt user if input is not a whole integer
int get_denominator()
{
    string denominator;
    cout << "Please enter the denominator of your fraction: ";
    cin >> denominator;

    if (is_number(denominator) == true)
    {
        cout << "Your denominator is " << denominator << endl;
        int int_denominator =  atoi(denominator.c_str());
        return int_denominator;
    }
    else
    {
        cout << "Invalid denominator, whole numbers only (This excludes 0)! No Decimals or letters either! " << endl;
        get_denominator();
    }
}

string fraction_again(string user_string)
{

}

int reduce_fractions()
{
    int numerator = get_numerator();
    int denominator = get_denominator();
    
    


}



// MAIN FUNCTION
int main()
{
    reduce_fractions();

    
    
    return 0;
}