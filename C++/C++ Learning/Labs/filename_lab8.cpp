#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Please enter some text: ";
    char input[50];

    cin >> input;

    for (int i = 0; i <= 50; i++)
    {
        cout << input[i];
    }

    cout << endl;

    return 0;
}