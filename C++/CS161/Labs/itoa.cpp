/* 
Function = ITOA
Description = Turns int into char value
Parameters = int
Pre-Conditions = Input is int
Post-Conditions = Return the character
*/

#include <iostream>
using namespace std;

int main()
{
    int integer;

    cout << "Please enter the integer you would like to convert to a character " << endl;
    cin >> integer;
    cout << "The character value of " << integer << " is " << char(integer) << endl;

    return 0;


}