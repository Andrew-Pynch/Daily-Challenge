def reverse(s): 
    str = "" 
    for i in s: 
        str = i + str
    return str

def palindrome_detector(string):
    string = list(string) # make each character an entry in a list
    
    # Remove spaces
    for i in range(string):
        if string[i] == " ": # space
            string[i].pop

    # Check if reversed string and original string are the same
    string = string.join() # Combine the list of chars back into a string 
    if string == reverse(string):
        return True
    else:
        return False;

    


        
