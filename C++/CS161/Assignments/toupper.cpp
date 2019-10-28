#include <stdio.h>
#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>
#include <cstring>

using namespace std; // now we don't have to affix inputs / outputs with std::cout etc...


 
/******** function definition *******/
string stringLwr(char *s)
{
    int i=0;
    while(s[i]!="\0")
    {
        if(s[i]>="A" && s[i]<="Z"){
            s[i]=s[i]+32;
        }
        ++i;
    }
}
 
string stringUpr(char *s)
{
    int i=0;
    while(s[i]!="\0")
    {
        if(s[i]>="a" && s[i]<="z"){
            s[i]=s[i]-32;
        }
        ++i;
    }

int main();
{
    stringUpr("hello");

    return 0;
}
