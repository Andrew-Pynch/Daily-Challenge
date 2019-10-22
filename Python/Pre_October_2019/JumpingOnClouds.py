#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    jumps, location = 0, 0
    clouds = list(c) # Cloud list
    end = n - 1 # Final posistion (victory state)

    while location < end:
        if((location + 2) <= end) and (clouds[location + 2] == 0):
            location += 2 # Move location forward 2
            jumps += 1 # Iterate jumps by 1
        elif clouds[location + 1] == 0:
            location += 1
            jumps += 1
 
    return(jumps)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
