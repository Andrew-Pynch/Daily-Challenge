'''
Program: assignment3.cpp_design - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Handle Fractions and Produce Fractals
'''

def fractions():
    def get_numerator():
        numerator = input("Enter your numerator")
        if numerator != int:
            print("Invalid input! Whole integers only! ")
            get_numerator()

    def get_denominator():
        denominator = input("Enter your denominator")
        if denominator != int:
            print("Invalid input! Whole integers only! ")
            get_denominator()

    numerator = numerator % 2
    denominator = denominator % 2
    if denominator != 0:
        return("Lowest terms of your fraction: " + numerator + " / " + denominator)
    else:
        return("NULL: Divide by 0!")
    
    def again():
        prompt = (str(input("Would you like to perform another conversion? [y/n]: "))
        print(prompt)
        if prompt == 'y' or prompt == 'Y':
            fractions()
        elif prompt == 'n' or prompt == 'N':
            exit
        else:
            print("Invalid input: y for yes, n for no!")
            again()
    
def fractals():
    rows = str(input("Please enter the number"))

    







    

    