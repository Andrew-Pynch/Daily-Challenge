#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void get_string(string *str)
{
       string temp;
       cout << "Please enter your string: " << endl;
       getline(cin, temp);
       *str = temp;
}


int main()
{
    string *original;   
    get_string(original);
    cout << original << endl;
}
