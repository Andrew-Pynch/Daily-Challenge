/* 
Function = ATOI
Description = Turns character into a decimal value
Parameters = Char character
Pre-Conditions = Input is character
Post-Conditions = Return the decimal value
*/

#include <iostream>
using namespace std;

int main()
{
    char character;
     
    cout << "Please enter a single character: ";
    cin >> character;
    cout << "ASCII Value of " << character << " is " << int(character);
    
    return 0;
}