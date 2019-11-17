def reverse(s): 
    str = "" 
    for i in s: 
        str = i + str
    return str


def palindrome_detector(string):
    string = list(string) # make each character an entry in a list
    
    # Remove spaces
    for i in range(len(string)):
        if string[i] == " ": # space
            string[i].pop

    # Check if reversed string and original string are the same
    string = string.join() # Combine the list of chars back into a string 
    if string == reverse(string):
        return True
    else:
        return False;


def word_frequency(string):
    unique_count = dict()

    words = string.split()

    for word in words:
        if word in unique_count:
            unique_count[word] += 1
        else:
            unique_count[word] = 1
    
    # Return the dictionary countaining each word and its frequency
    return(unique_count)




def specific_frequency(string, specific_word):
    words = string.split()

    # Initialize the count of the specific word we are looking for
    specific_count = 0

    for i in words:
        if words[i] == specific_word:
            specific_count += 1
        else:
            continue

    
    return(specific_count)

