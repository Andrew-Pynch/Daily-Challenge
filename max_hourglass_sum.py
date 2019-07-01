#!/bin/python3
# 7/1/2019 - Andrew Pynch
# This was by far the hardest of the mini challenges I have completed thusfar. Please make a pull request on this file if you feel I can make this code more pythonic or more efficient :-)
'''
                            Problem description
Given the 6x6 matrix A, return the sum of the largest possible hourglass.
An hourglass is defined to take the shape...
a b c
  d
e f g

EX 1:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
largest_hourglass_sum = 7

EX 2:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
largest_hourglass_sum = 19
'''

import math
import os
import random
import re
import sys

if __name__ == '__main__':

    arr = [] # arr = array

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

# Imagine that we are sliding an hourglass shaped filter over our matrix that looks at the numbers
# in the hourglass and sums them. It then takes that sum and stores it in the list sums.
# At the end of all of this, we find the max(item) in the list and print its value. 
def hourglass_sums(arr):
    num_rows = len(arr)
    num_cols = len(arr[0])
    sums = [] # This variable stores the sums we have computed thusfar
    
    # i = the ith row of the matrix
    # j = the jth column of the matrix
    for i in range(len(num_rows - 2)): # We subtract two to prevent the filter from "sliding" over the edge of the matrix. Matrix test cases are 6x6 on hackerrank
        for j in range(len(num_cols - 2)):
                    result = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +   # Row 1
                    arr[i + 1][j + 1] +                                     # Row 2  
                    arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2])  # Row 3
                    sums.append(result)

    return(sums)

def max_hourglass_sum(arr):
    return(hourglass_sums(arr)