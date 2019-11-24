// CPP program to find type of input character 
#include <iostream> 
using namespace std; 
  
void charCheck(char input_char) 
{ 
    // CHECKING FOR ALPHABET 
    if ((input_char >= 65 && input_char <= 90) 
        || (input_char >= 97 && input_char <= 122)) 
        cout << " Alphabet "; 
  
    // CHECKING FOR DIGITS 
    else if (input_char >= 48 && input_char <= 57) 
        cout << " Digit "; 
  
    // OTHERWISE SPECIAL CHARACTER 
    else
        cout << " Special Character "; 
} 
  
// Driver Code 
int main() 
{ 
    cout << "Please enter a character : ";
    char input_char;
    cin >> input_char; 
    charCheck(input_char); 
    return 0; 
} 