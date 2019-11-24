// CPP program to remove all the 
// characters other then alphabets 
#include <bits/stdc++.h> 
using namespace std; 

// function to remove characters and 
// print new string 
void removeSpecialCharacter(string s) 
{ 
	int j = 0; 
	for (int i = 0; i < s.size(); i++) { 
		
		// Store only valid characters 
		if ((s[i] >= 'A' && s[i] <= 'Z') || 
			(s[i] >='a' && s[i] <= 'z')) 
		{ 
			s[j] = s[i]; 
			j++; 
		} 
	} 
	cout << s.substr(0, j); 
} 

// driver code 
int main() 
{ 
	char *s = new char[1025];
	s = "$Gee*k;s..fo, r'Ge^eks?"; 
	removeSpecialCharacter(s); 
	return 0; 
} 
