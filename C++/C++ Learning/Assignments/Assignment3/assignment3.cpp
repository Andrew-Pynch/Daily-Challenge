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


// Returns the Greatest Common Denominator of two numbers
// input: int numerator, int denominator
// output: int, gcd_val
int gcd(int numerator, int denominator) 
{  
    if (numerator == 0) 
       return denominator; 
    if (denominator == 0) 
       return numerator; 

   
    if (numerator == denominator) 
        return numerator; 

   
    if (numerator > denominator) 
        return gcd(numerator-denominator, denominator); 
    return gcd(numerator, denominator-numerator); 
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


// Reduce a fraction to lowest terms 
// Input: int numerator, int denominator
// Output: fraction in lowest terms
int reduce_fractions()
{
    // EXCLUDING COMMENTS AND WHITESPACE THIS IS < 15 LINES
    // Initial Variables with function calls
    int numerator = get_numerator();
    int denominator = get_denominator();
    int gcd_val = gcd(numerator, denominator);

    // Update the values of the numerator & denominator based off of the GCD
    numerator /= gcd_val;
    denominator /= gcd_val;

    // Print the result
    cout << numerator << endl;
    cout << "--" << endl;
    cout << denominator << endl;

}


// Function to call reduce_fractions based on user input
// Calls reduce fraction if answer = 1
// Else: Contines;
void fractions_again()
{
    // Ask the user if they want to run the program again
    int answer;
    cout << "Would you like to reduce another fraction? 0 for No! 1 for Yes! ";
    cin >> answer;
    if (answer == 0)
    {
        cout << "Thank you for reducing fractions! " << endl;
    }
    else
    {
        reduce_fractions();
        fractions_again();
    }  
}




/*
**************************
PART 2
FRACTALS 
***************************
*/


void pattern(int n, int col)
{
    // BASE CASE (To prevent Stack Overflow)
    if (n <= 0)
    {
        cout << "* " << endl;
        return;
    }

    // TOP SECTION //
    pattern(n-2, col + 2);


    // A loop to print exactly col columns
    for (int i = 0; i < col; i++) cout << " ";

    // A loop to print n asterisks, each one followed by a space:
    for (int i = 0; i < n; i++) cout << "* ";


    // BOTTON SECTION //
    pattern(n-2, col + 2);
}


// MAIN FUNCTION
int main()
{
    // Run function to reduce fractions
    reduce_fractions();
    fractions_again();



    // Fractals
    cout << "PART 2: Recursive Functions ~ Creating the Fractal Star" << endl;
    
    // Initialize variables
    int n;
    int cols;

    // Get n from user
    cout << "Please enter n(the length of the longest line of *): ";
    cin >> n;

    // Get cols from user
    cout << "Please enter cols(the number of columns): ";
    cin >> cols;

    // Call Recursive function "pattern"
    pattern(n, cols);
    
    return 0;
}
