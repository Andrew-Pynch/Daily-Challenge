#include <iostream>
#include <string>
#include <string.h>
#include <math.h>

using namespace std;



void get_string(string *str)
{
       string temp;
       cout << "Please enter your string: " << endl;
       getline(cin, temp);
       cout << temp << endl;

       str = &temp;    //changes the contents of str to the value of temp.at
                       //the address that str points to, becomes the adress of temp
}

void set_replace_string()
{

}

int main()
{
    // Creating pointer for original string
    string *original_string;
    // Giving original string a value by calling the function get_string
    get_string(original_string);
    cout << &original_string << " " << original_string << *original_string << endl;


    // Set non-space characters to dashes in copy

    return 0;

}