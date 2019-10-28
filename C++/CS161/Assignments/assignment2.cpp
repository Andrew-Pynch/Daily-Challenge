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
#include <cstring>
#include <iomanip> // std::setprecision

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
Function: equality test float
Description: checks if two numbers are the same to a certain decimal acccuracy
Parameters: num1, num2, precision
Pre-Conditions: float input
Post-Conditions: -1, 0 , 1
*/
bool float_equality(float num1, float num2, float precision)
{
    if ((num1 - num2) < precision)
    {
        return true;
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
bool contains_substring(string sentence, string substring)
{
    int sublen = substring.length();
    for (int i = 0; i < sentence.length() - sublen; i++)
    {
        if ((sentence[i] == substring[i] && (sentence.at(i + sublen) == substring[i] + sublen)))
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
Function: word count
Description: count how many words are in a given string
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: int
*/
int wordcount(string sentence)
{
    int spacecount = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (int(sentence[i]) == 32)
        {
            spacecount ++;
        }
    }
    return spacecount + 1;
}


/*
Function: to_upper
Description: converts all letters in a string to uppercase
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: uppercase sentence
*/
string to_upper(string sentence) {
	for (int i = 0; i < sentence.length(); i++)
		if (sentence[i] >= 'a' and sentence[i] <= 'z')
			sentence[i] = sentence[i] - 32;
    // lower case / uppercase letters are +- 32 chars on the ascii table
    return sentence;
}


/*
Function: to lower
Description: converts all letters in a string to lowercase
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: lowercase sentence
*/
string to_lower(string sentence) {
	for (int i = 0; i < sentence.length(); i++)
		if (sentence[i] >= 'A' and sentence[i] <= 'Z')
			sentence[i] = sentence[i] + 32;
    // lower case / uppercase letters are +- 32 chars on the ascii table
    return sentence;
}

/*
Function: get int
Description: takes string input and checks if its an int and if it is returns aforementioned int
Parameters: string prompt
Pre-Conditions: string input from user
Post-Conditions: int
*/
string get_int()
{
    string user_input;
    cout << "Please enter some text. I will validate if it contains integers" << endl;
    cin >> user_input;
    for (int i = 0; i < user_input.length(); i++)
    {
        if (47 < int(user_input[i] < 57))
        {
            return user_input;
        }
    }
}

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



    cout << "TESTING float_equality" << endl;
    cout << "Values: 1.12, 1.12, .01" << endl;
    cout << "Expected: " << endl;
    cout << "Actual: ";
    if (float_equality(1.12, 1.12, 0.1) == true)
    {
        cout << 'true: TEST PASSED' << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING float_equality" << endl;
    cout << "Values: 1.1234, 1.1235, .01" << endl;
    cout << "Expected: " << endl;
    cout << "Actual: ";
    if (float_equality(1.12, 1.12, 0.1) == true)
    {
        cout << 'true: TEST PASSED' << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }     





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
    cout << endl;
    cout << "TESTING letters_present()" << endl;
    cout << "Values: !" << endl;
    cout << "Expeced: false" << endl;
    cout << "Actual: ";
    if (letters_present("!") == false)
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




    cout << "TESTING contains_substring()" << endl;
    cout << "Values: Hello Andrew, Andrew" << endl;
    cout << "Expected: true" << endl;
    cout << "Actual: ";
    if (contains_substring("Hello Andrew", "Andrew") == true)
    {
        cout << "true: TEST PASSED" << endl;
    }
    else
    {
        cout << "false: TEST FAILED" << endl;
    }
    cout << endl;
    cout << "TESTING contains_substring()" << endl;
    cout << "Values: Hello Andrew, Dank" << endl;
    cout << "Expected: false" << endl;
    cout << "Actual: ";
    if (contains_substring("Hello Andrew", "Dank") == false)
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




    cout << "TESTING wordcount()" << endl;
    cout << "Values: Hello Roger" << endl;
    cout << "Expected: 2" << endl;
    cout << "Actual: ";
    if (wordcount("Hello Roger") == 2)
    {
        cout << "true: TEST PASSED" << endl;
    }    
    else
    {
        cout << "false: TEST FAILED" << endl;
    }



    cout << "TESTING to_upper()" << endl;
    cout << "Values: hello" << endl;
    cout << "Expected: HELLO" << endl;
    cout << "Actual: ";
    if (to_upper("hello") == "HELLO")
    {
        cout << "HELLO: TEST PASSED" << endl;
    }
    else
    {
        cout << "hello: TEST FAILED" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;




    cout << "TESTING to_lower()" << endl;
    cout << "Values: HELLO" << endl;
    cout << "Expected: hello" << endl;
    cout << "Actual: ";
    if (to_lower("HELLO") == "hello")
    {
        cout << "hello: TEST PASSED" << endl;
    }
    else
    {
        cout << "HELLO: TEST FAILED" << endl;
    }
    

    cout << get_int();




    





    return 0;
}

