#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    level = 0
    valley = 0
    s = list(s)
    
    for i in range(len(s)-1):
        if s[i] == 'U':
            level += 1
        else:
            if level == 0:
                valley += 1 # If Gary returns to sea level before the function
                            # Has completed, it means he entered and left a valley
            level -= 1
    
    return(valley)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
