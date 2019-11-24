/*
Program: assignmen43.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Detect Palindromes, Count word frequency, count frequency of given word
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

// Get c - style string
void get_string(char *str)
{
    cout << "Please enter a string: ";
    cin.getline(str, 1025);
}

void purge_string_space(char *dirty_string, char *clean_string)
{
    
    for (int i = 0; i < strlen(dirty_string); i++)
    {
        cout << "HI" << endl;
    } 
}




int main()
{
    char *input = new char;
    get_string(input);

    /*
    cout << "Content of input: " << *input << endl;
    cout << "Address input points to: " << input << endl;
    cout << "Address of input: " << &input << endl << endl;

    cout << strlen(input) << endl;
    */

   purge_string_space(input);


   return 0;
}