#include <iostream>
#include <string>
using namespace std;

/*********************************************************************
** Function: GET_STRING
** Description: makes a copy of the string, gives it back to main
** Parameters: string *str
** Pre-Conditions: string *str points to a string
** Post-Conditions: str is changed to what the user inputs.
*********************************************************************/
void get_string(string *str)
{
       cout << "Please enter your string: " << endl;
       getLine(cin, str);
}

/*********************************************************************
** Function: SET_REPLACE_STRING
** Description: Changes all non-space letters to dashes
** Parameters: string *copy
** Pre-Conditions:  string *copy points to a string
** Post-Conditions: changes non-space letters in string copy to dashes
*********************************************************************/
void set_replace_string(string *copy){
    for (int i = 0; i < *copy.length(); i++){
        if (int(*copy.at(i)) != 32){
            *copy += char(45);
        }
        else{
            *copy += char(32);
        }
    }
}


// Searches a replaced string for a letter and displays letter
// replaced_string = "-----"
// original_string
/*********************************************************************
** Function: GET_SEARCH_REPLACE
** Description: Searches a replaced string for a letter and displays letter. replaced_string = "----"
** Parameters: string *str1, string str2
** Pre-Conditions: string *str1, string str2
** Post-Conditions: string *str1, string str2, returns the number of letters found;
*********************************************************************/
int get_search_replace(char select, string str1, string &str2)
{
    int lettersFound;
    for(int i = 0; i < str1.length; i++)
        if (str1[i] == select)
        {
            str2[i] == select;fsdg
            lettersFound++;
        }
    
    return lettersFound;
}
                        

/*********************************************************************
 * MEMORY MANAGEMENT
 * Write functions to create memory on the heap
*********************************************************************/                  




int main() //Copy string
{
    string *original;
        
    get_string(original);
    
    // COPY STRING 
    string *copy = original;
    
    // FUNCTION CALLS First string sent is unaltered/original
    set_replace_string(copy);

    

 
    
    
}
