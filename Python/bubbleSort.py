#!/bin/python3

import sys


# Write Your Code Here

def bubble_sort(lst):
    running_swaps = 0
    if len(lst) < 2:
        return running_swaps
    
    for j in range(len(lst) - 1, 0, -1):
        for i in range(j):
            if a[i] > a[i + 1]:
                a[i], a[i + 1] = a[i + 1], a[i]
                running_swaps += 1
    
    return running_swaps

n = int(input().strip()) # Number of items in List A
a = list(map(int, input().strip().split(' '))) # List A that needs to be sorted        

numSwaps = bubble_sort(a)
firstElement = a[0]
lastElement = a[-1]
print('Array is sorted in ' + str(numSwaps) + ' swaps.')
print('First Element: ' + str(firstElement))
print('Last Element: ' + str(lastElement))
    
