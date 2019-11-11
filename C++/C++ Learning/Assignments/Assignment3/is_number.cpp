#include <iostream>
#include <string.h>
#include <string>

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

int main()
{
    if (is_number("1234") == false)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }

    return 0;
}