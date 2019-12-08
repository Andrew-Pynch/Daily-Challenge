#include <iostream>
#include <string>
#include <cmath>

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
            (*copy).at(i) = char(45);
        }
        else{
            (*copy).at(i) = char(32);
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
int get_search_replace(string str1, string &str2)
{  
    char select;
    cout << "Please enter the letter you would like to search for: ";
    cin >> select;
    
    int lettersFound = 0;
    for(int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == select)
        {
            str2[i] = select;     
            lettersFound++;
        }
    }
    return lettersFound;
}

/* Write functions to create memory on the heap
*********************************************************************/ 
void make_string()
{
    string *name = new string;
    for (int i = 0; i < 10; i++)
    {
        cout << *name << endl;
    }
    delete name;
}

void create_loooooooong_array(int size)
{
    int *avrg_pen_size = new int[size];
    for (int i = 0; i < 10; i++)
        avrg_pen_size[i] = rand() % 9 + 1;
     for (int i = 0; i < 10; i++)
        cout << avrg_pen_size[i];
    delete [] avrg_pen_size; 
}

void new_number()
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
    //***************************************************//
    //PART 1:
    
    string *original = new string;

    get_string(original);

    cout << "Content of original: " << *original << endl;
    cout << "Address original points to: " << original << endl;
    cout << "Address of original: " << &original << endl << endl;

    // COPY STRING 
    string *copy = new string;    //copy is same value as original but new memory
    *copy = *original;
    

    // FUNCTION CALLS
    set_replace_string(copy);
    
    cout << "copy: " << *copy << endl;
	cout << "original: " << *original << endl;

    int lettersFound = 0;

    get_search_replace(*original, *copy); 

    cout << *copy << endl;

    cout << "letters found: " << lettersFound;
    
    // Clear up memory blocks
    delete copy;
    delete original;



    //***************************************************//
    //Call functions to test heap memory:
    make_string();
    create_loooooooong_array(4);
    new_number();
}   
