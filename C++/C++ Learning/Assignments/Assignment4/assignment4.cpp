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
#include <bits/stdc++.h> 

using namespace std;

// Get c - style string less than 1025 characters
void get_string(char *str)
{
    cout << "Please enter a string: ";
    cin.getline(str, 1025);
}




// Function to remove all spaces from a given string 
void remove_spaces(char *str) 
{ 
    int space_count = 0; 
  
    for (int i = 0; str[i]; i++) 
    {
        if (str[i] != ' ') 
        {
            str[space_count++] = str[i];
        }
    }

    str[space_count] = '\0'; 
} 





// Function to reverse a string
void reverse_string(char *str)
{
    for (int i = 0; i < (strlen(str)) / 2; i++)
    {
        swap(str[i], str[(strlen(str)) - i - 1]);
    }
}



// COnverts all chars in a string to lowercase variants
void to_lower(char *str)
{
    int str_len = strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        if ((65 <= str[i]) && (str[i] <= 90))
        {
            str[i] = str[i] + 32;
        }
    }
}




bool palindrome(char *str)
{
    char temp[1025];
    // Copy the values of str into temp with a new memory location for temp
    strcpy(str, temp);

    if (str == temp)
    {
        return true;
    }
    else
    {
        return false;
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


    remove_spaces(input);
    cout << input << endl;

    reverse_string(input);
    cout << "Reversed: " << input << endl;

    to_lower(input);
    cout << "Lowercase: " << input << endl;



    return 0;
}