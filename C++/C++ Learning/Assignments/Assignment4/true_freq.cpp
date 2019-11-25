#include<bits/stdc++.h> 
using namespace std; 


// Get c - style string less than 1025 characters
void get_string(char *str)
{
    cout << "Please enter a string: ";
    cin.getline(str, 1025);
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
	
/* Driver program to test above function */
int main() 
{ 
    char *txt = new char;
    char *search = new char;

    get_string(txt);
    get_string(search);

    cout << specific_frequency(search, txt); 
    return 0; 
} 
