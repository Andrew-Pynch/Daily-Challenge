#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool is_number(string s)
{
    // We use a const iterator because we don't want the value inside this function to protect pointed to value
    string::const_iterator it = s.begin(); 
    // Iterate through each character of the string
    while (it != s.end() && isdigit(*it)) ++it;
    //Return
    return !s.empty() && it == s.end();
}


int get_denominator()
{
    string denominator;
    cout << "Please enter the denominator of your fraction: ";
    cin >> denominator;

    if (is_number(denominator) == true)
    {
        cout << "Your denominator is " << denominator << endl;
    }
    else
    {
        cout << "Invalid denominator, whole numbers only! No Decimals or letters! " << endl;
        get_denominator();
    }
}


int main()
{
    get_denominator();

    return 0;
}