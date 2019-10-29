#include <iostream>
#include <string>

using namespace std;

void get_sentence(string &s)
{
    cin >> s;
}


int main() 
{
    string str;
    getline(cin, str);
    cout << str << endl;
    
    
    
    return 0;
}
