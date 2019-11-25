/* C++ program to count no of words 
from given input string. */
#include <bits/stdc++.h> 
using namespace std; 

#define false 0 
#define true 1 

// returns number of words in str 
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

// Driver code 
int main(void) 
{ 
	char str[1025] = "One two	hello he three\n four\tfive "; 
	cout << "No of words : " << word_count(str); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
