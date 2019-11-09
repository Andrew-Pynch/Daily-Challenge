#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>
#include <cstring>

using namespace std;


/*
Function: word count
Description: count how many words are in a given string
Parameters: string sentence
Pre-Conditions: string input
Post-Conditions: int
*/
int main()
{
    int spacecount = 0;
    string sentence = "Hello roger and andrew";
    for (int i = 0; i < sentence.length(); i++)
    {
        if (int(sentence[i] == 32))
        {
            cout << "Space Detected" << endl;
        }
    }

    return EXIT_SUCCESS;    
}