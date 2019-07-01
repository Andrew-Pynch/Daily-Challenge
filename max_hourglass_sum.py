#!/bin/python3
# 7/1/2019 - Andrew Pynch
# This was by far the hardest of the mini challenges I have completed thusfar. Please make a pull request on this file if you feel I can make this code more pythonic or more efficient :-)

import math
import os
import random
import re
import sys

if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
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
# Image that we are sliding an hourglass filter over our matrix that looks at the numbers
# in the hourglass and sums them. It then takes that sum and stores it in a list.
# At the end of all of this, we find the max(item) in the list and print its value. 

num_rows = len(arr)
num_cols = len(arr[0])
# i = the ith row of the matrix
# j = the jth column of the matrix
sums = []
for i in range(num_rows - 2): # - 2 to prevent sliding over the edge of the matrix
    for j in range(num_cols -2): # Same here ^
        result = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2])
        sums.append(result)
        
print(max(sums))