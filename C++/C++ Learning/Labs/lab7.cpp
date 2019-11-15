#include <iostream>
#include <string>
#include <string.h>
#include <math.h>

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
       string temp;
       cout << "Please enter your string: " << endl;
       getline(cin, temp);
       cout << temp << endl;

       str = &temp;    //changes the contents of str to the value of temp.at
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
    for (int i = 0; i < (copy).length(); i++)      
    {
        cout << "In the for loop" << endl;
        if ((*copy).at(i) != ' '){
            (*copy).at(i) = char(45);
            cout << "Still working" << endl;
        }
        else{
            (*copy).at(i) = char(32);
            cout << "Still working" << endl;
        }
    }
}


// Searches a replaced string for a letter and displays letter
// replaced_string = 45  - -----"
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
void make_string()
{
    string *name = new string;
}

void create_loooooooong_array(int size)
{
    int *avrg_pen_size = new int[size];
    for (int i = 0; i < 100; i++)
        avrg_pen_size[i] = rand() % 9 + 1;
     for (int i = 0; i < 100; i++)
        cout << avrg_pen_size[i] << endl;
    delete [] avrg_pen_size; 
}




int new_number()
{
    int *new_numbah ; 
    new_numbah = new int[3];
    if (*new_numbah == 2)
    {
        cout << "Yeah, it's two." << endl;
    }
    else 
    {
        cout << "No, it's not two." << endl;
    }    
    delete [] new_numbah; 
}
    

int main() //Copy string
{
    string *original;
        
    get_string(original);
    
    // // COPY STRING 
    string *copy = *original;
    
    // // FUNCTION CALLS First string sent is unaltered/original
    cout << "I made it here! :-)" << endl;
    set_replace_string(copy);
    
    // int lettersFound;
    //get_search_replace(original, copy);
    // cout << "letters found: " << lettersFound;

    //create_loooooooong_array(4);
    
    //check_int();
    
}