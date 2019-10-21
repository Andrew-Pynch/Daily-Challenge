# Author = Andrew Pynch
# Date = 10/20/2019
# Assignment = Assignment2 Design Document
# Psuedocode language = Python: I Wrote the psuedocode in python because this is my primary language. I used the properties of some python functions to make
# the creation of this document as speedy as possible. I hope the psuedo code is still self explanatory :-)

def check_range(lower_bound, upper_bound, test_value):
    # Initialize as false, set to true if test value is in range
    test_value_in_range = False:

    # Calculate the range from upper_bound, lower_bound
    value_range = upper_bound - lower_bound
    for i in range(len(value_range)):
        if i == test_value:
            test_value_in_range = True

    return test_value_in_range


def is_capital(letter):
    return True if letter.isupper()




def is_even(number):
    return True if number % 2 == 0;



def is_odd(number):
    return True if number % 2 != 0;



def equality_test(num1, num2):
    if num1 < num2:
        return -1

    if num1 == num2:
        return 0

    elif num1 > num2:
        return 1  


def float_is_equal(num1, num2, precision):
    if precision(num1) == precision(num2):
        return True
    else:
        return False



def is_int(num):
    if num.isint():
        return True
    else:
        return False



def numbers_present(sentence):
    chars = list(sentence)
    for i in range(len(chars)):
        if chars[i] == int:
            return True

        else:
            return False



def letters_present(sentence):
    chars = list(sentence)
    for i in range(len(chars)):
        if chars[i] == string:
            return True
        
        else:
            return False



def contains_sub_string(sentence, substring):
    words = sentence.split(" ")
    for i in range(len(words)):
        if words[i] == substring:
            return True

        else:
            return False



def word_count(sentence):
    words = sentence.split(" ")
    return len(words)



def to_upper(sentence):
    return upper(sentence)



def to_lower(sentence):
    return lower(sentence)



def get_int(prompt):
    user_number = int(input("Please enter a valid integer"))
    
    if user_number == user_number.isint():
        return ("You entered the valid integer: " user_number)
    
    else:
        return("That is not a valid integer. Please enter a different number. ")
        get_int()




    
