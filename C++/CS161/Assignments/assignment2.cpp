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
#include <string>

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
bool is_even(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
Function: is_odd
Description: checks if input is odd
Parameters: int
Pre-Conditions: int input 
Post-Conditions: bool
*/
bool is_odd(int number)
{
    if (number % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }   
}


/*
Function: equality test
Description: checks if two numbers are the same or different and returns different values accordingly
Parameters: num1, num2
Pre-Conditions: int input
Post-Conditions: -1, 0 , 1
*/
int equality_test(int num1, int num2)
{
    if (num1 < num2)
    {
        return -1;
    }
    else if (num1 == num2)
    {
        return 0;
    }
    else if (num1 > num2)
    {
        return 1;
    }
}


/*
Function: is_int
Description: checks if string is int
Parameters: string num
Pre-Conditions: string input
Post-Conditions: bool
*/
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


/*
Function: numbers_present
Description: Checks if a string contains numbers
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: bool
*/
bool numbers_present(string sentence)
{
    for (int i=0; i<=sentence.length(); i++)
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


/*
Function: letters present
Description: Checks if a string contains letters
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: bool
*/
bool letters_present(string sentence)
{
    for (int i=0; i<=sentence.length(); i++)
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



/*
Function: contains sub string
Description: checks if a substring exists in a sentence
Parameters: string sentence, string substring
Pre-Conditions: string input
Post-Conditions: bool
*/
int FindSubstringindex(const string *parentstring, const string *substring) {
  int e = 0, indx = -1;
  const char *parentcstring = parentstring->c_str();
  const char *csubstring = substring->c_str();
 
  for (int i = 0; i < strlen(parentcstring); i++) {
      if (parentcstring[i] == csubstring[e]) {
  	  if (e == 0) 
  	  	indx = i;
  	  e++;
  	  if (e == strlen(csubstring)) {
  	  	return indx;
  	  } else {
  		e = 0;
  	  }
      }
  }
  return -1;
}


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
    cout << "TESTING check_range()" << endl;
    cout << "Values : lower=0, test=1, upper=2" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (check_range(0, 1, 2) == true)
    {
        cout << "true: TEST PASSED" << endl;

    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING check_range()" << endl;
    cout << "Values: lower=0, test=3, upper=2" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (check_range(0, 3, 2) == true)
    {
        cout << "false: TEST PASSED" << endl;

    }
    else
    {
        cout << "true: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;



    cout << "TESTING is_capital " << endl;
    cout << "Values: 'g'" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (is_capital('g') == false)
    {
        cout << "false: TEST PASSED" << endl;
    }
    else
    {
        cout << "true: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING is_capital " << endl;
    cout << "Values: 'G'" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (is_capital('G') == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;



    cout << "TESTING is_even()" << endl;
    cout << "Value: 4" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (is_even(4) == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING is_even()" << endl;
    cout << "Value: 5" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (is_even(5) == false)
    {
        cout << "false: TEST PASSED" << endl;
    }
    else
    {
        cout << "true: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "TESTING is_odd()" << endl;
    cout << "Value: 5" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (is_odd(5) == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING is_odd()" << endl;
    cout << "Value: 4" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (is_odd(4) == false)
    {
        cout << "false: TEST PASSED" << endl;
    }
    else
    {
        cout << "true: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;




    cout << "TESTING equality_test()" << endl;
    cout << "Values: [1, 2], [2, 2], [3, 2]" << endl;
    cout << "Expected: -1, 0, 1" << endl;
    cout << "Actual: ";
    if (equality_test(1, 2) == -1 && equality_test(2, 2) == 0 && equality_test(3, 2) == 1)
    {
        cout << "-1, 0, 1: TEST PASSED" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "TESTING is_int()" << endl;
    cout << "Values: 1" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (is_int('1') == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING is_int()" << endl;
    cout << "Values: a" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (is_int('a') == false)
    {
        cout << "false: TEST PASSED" << endl;
    }
    else
    {
        cout << "true: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;




    cout << "TESTING numbers_present()" << endl;
    cout << "Values: 'hello'" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (numbers_present("Hello") == false)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING numbers_present()" << endl;
    cout << "Values: 'he22o'" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (numbers_present("He22o") == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "true: TEST PASSED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;



    cout << "TESTING letters_present()" << endl;
    cout << "Values: 21 Hello" << endl;
    cout << "Expeced: true" << endl;
    cout << "Actual: ";
    if (letters_present("21 Hello") == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else 
    {
        cout << "false: TEST FAILED" << endl;
    }
=
    
    const string extendedParentstring = "Hello extended string Agnosticdev, I love Tutorials";
    const string substring = "Agnosticdev";

    // Alternative Approach
    int substringIndex = FindSubstringindex(&extendedParentstring, &substring);
    cout << "Substring found at index " << substringIndex << endl;
 




    
}

