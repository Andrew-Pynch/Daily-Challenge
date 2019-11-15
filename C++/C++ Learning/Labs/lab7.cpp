#include <iostream>
#include <string>
#include <string.h>

using namespace std;


/*********************************************************************
 * PRACTICE FUNCTIONS
 * Write functions to do dumb stuff with strings
*********************************************************************/   

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
       getline(cin, *str);
}

/*********************************************************************
** Function: SET_REPLACE_STRING
** Description: Changes all non-space letters to dashes
** Parameters: string *copy
** Pre-Conditions:  string *copy points to a string
** Post-Conditions: changes non-space letters in string copy to dashes
*********************************************************************/
void set_replace_string(string *copy)
{
    for (int i = 0; i < (*copy).length(); i++)      
    {
        if ((*copy).at(i) != ' '){
            *copy += char(45);
            cout << "Still working" << endl;
        }
        else{
            *copy += char(32);
            cout << "Still working" << endl;
        }
    }
}


// Searches a replaced string for a letter and displays letter
// replaced_string = "-----"
// original_string
/*********************************************************************
** Function: GET_SEARCHlength_REPLACE
** Description: Searches a replaced string for a letter and displays letter. replaced_string = "----"
** Parameters: string *str1, string str2
** Pre-Conditions: string *str1, string str2
** Post-Conditions: string *str1, string str2, returns the number of letters found;
*********************************************************************/
int get_search_replace(char select, string str1, string &str2)
{
    int lettersFound;
    for(int i = 0; i < str1.length(); i++)
        if (str1[i] == select)
        {
            str2[i] == select;
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
    

    // int lettersFound;
    //get_search_replace(original, copy);
    // cout << "letters found: " << lettersFound;
 
    
    
}


//THREE FUNCTIONS WITHOUT MEMORY LEAKS:
//