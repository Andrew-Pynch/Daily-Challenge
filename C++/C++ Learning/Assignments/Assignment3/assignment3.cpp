/*
Program: assignment3.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Handle Fractions and Produce Fractals
*/

// Imports
#include <iostream>

using namespace std;

//// Functions From Assignement 2 ////
// Check if char is integer or string
bool is_float(string num)
{
    if (num % 1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool is_int(char num)
    {
        if ((num >= '0') && (num <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }    
    }

// Check if sentence contains Numbers
bool numbers_present(string sentence)
    {
        for (int i=0; i <= sentence.length(); i++)
        {
            if (is_int(sentence[i]) == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

// Check if a sentence contains letters
bool letters_present(string sentence)
    {
        for (int i=0; i <= sentence.length(); i++)
        {
            if ((65 <= int(sentence[i]) <= 90) || (97 <= int(sentence[i]) <= 122))
            {
                return true;
            }
            else
            {
                return false;
            }   
        }
    }


//// FRACTION IN LOWEST TERMS ////

// Get the numerator of the fraction
int get_numerator()
{
    string numerator;
    cout << "Please enter the numerator of your fraction: ";
    cin >> numerator;

    // Check if the user input is valid
    // Valid Inputs = Whole Numbers
    // Invalid inputs = Strings, Floats
    if (is_float(numerator) == false)
    {
        cout << "A decimal number is not a valid input. Whole numbers only " << endl;
        get_numerator();
    }
    else if (letters_present(numerator) == true)
    {
        cout << "A string is not a valid input. Whole numbers only " << endl;
        get_numerator();
    }
    
    
}


// Get the denominator of the fraction
int get_denominator(int user_int)
{

}

string fraction_again(string user_string)
{

}

int fractions()
{

}



// MAIN FUNCTION
int main()
{
    get_numerator();

    
    
    return 0;
}