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
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 

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




void palindrome(char *str)
{
    int l = 0;
    int r = strlen(str) - 1;

    // Keep comparing up to the midpoint of the string
    while (r > l)
    {
        if (str[l++] != str[r--])
        {
            cout << str << " is not a Palindrome" << endl;
        }
        else
        {
            cout << str << " is a Palindrome" << endl;
            break;
        }
    }
}



void removeSpecialCharacter(string str) 
{ 
	int j = 0; 
	for (int i = 0; i < s.size(); i++) { 
		
		// Store only valid characters 
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <= 'z')) 
		{ 
			str[j] = str[i]; 
			j++; 
		} 
	} 
	cout << s.substr(0, j); 
} 



void selection()
{
    int input;

    cout << "Welcome to Assignment 4 " << endl;
    cout << "Select one of the following numbers for a program subcomponent" << endl;
    
    cout << "1 for Palindrome Detector: " << endl;
    cout << "2 for Generic Word Counter: " << endl;
    cout << "3 for Search Word Count" << endl;
    if (input == 1)
    {
        palindrome();
    }
}




int main()
{
    char *input = new char;
    get_string(input);


    // REMOVE SPACES
    remove_spaces(input);


    // MAKE THE OUTPUT LOWERCASE
    to_lower(input);

    // Remove Specials
    removeSpecialCharacter(input);

    // TEST PALINDROMITY
    //palindrome(input);

    return 0;
}