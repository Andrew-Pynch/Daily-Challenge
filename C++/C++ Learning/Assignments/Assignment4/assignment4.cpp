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




// Converts all chars in a string to lowercase variants
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
            break;
        }
        else
        {
            cout << str << " is a Palindrome" << endl;
            break;
        }
    }
}



void remove_special_character(string str) 
{ 
	int j = 0; 
	for (int i = 0; i < str.size(); i++) { 
		
		// Store only valid characters 
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <= 'z')) 
		{
            if (int(str[i]) != 32)
            {
                str[j] = str[i]; 
                j++; 
            }

		} 
	} 
	cout << str.substr(0, j); 
} 



int word_count(char *str) 
{ 
	bool state = false; 
	int word_count = 0; 
	// Scan each char in the c-string 1 by 1
	while (*str) 
	{ 
		// If str[i] (current char) + 1(next char) is a space / new line / tab, set state = false
		if (*str == ' ' || *str == '\n' || *str == '\t') 
        {
			state = false; 
        }
        // If neext char is NOT a space, increment word count by 1
		else if (state == false) 
		{ 
			state = true; 
			++word_count; 
		} 
		// Move to next character 
		++str; 
	} 
	return word_count; 
} 




void list_of_words(char* str)
{
    char *token = strtok(str, " ");
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }
}



int specific_frequency(char *search, char *txt) 
{ 
	int M = strlen(search); 
	int N = strlen(txt); 
	int result = 0; 
	
	// A loop to slide search[] one by one 
	for (int i = 0; i <= N - M; i++) 
	{ 
		// For current index i, check for pattern match 
		int j; 
		for (j = 0; j < M; j++) 
        {
			if (txt[i+j] != search[j]) 
            {
				break; 
            }
        }


		// if search[0...M-1] = txt[i, i+1, ...i+M-1] 
		if (j == M) 
		{ 
            result++; 
            j = 0; 
		} 
	} 
	return result; 
} 




int main()
{
    char *input = new char;
    get_string(input);
    
    cout << "########## PALINDROME DETECTOR ##########" << endl; 

    // Copy the user input for use in later functions
    char *copy1 = new char;
    strcpy(copy1, input);

    // Finish function calls to run palindrome detector
    remove_spaces(input);
    to_lower(input);
    palindrome(input);

    cout << "########## WORD COUNTER ##########" << endl; 
    cout << "Count of words in the string you input is: " << word_count(copy1) << endl;

    remove_special_character(copy1);
    to_lower(copy1);
    char *search = new char;
    get_string(search);
    cout << "The specific frequency of " << search << "in your sentence is " << specific_frequency(search, copy1) << endl;;
    return 0;
}