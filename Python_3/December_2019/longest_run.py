# Input: integer
# Output: Binary String
def num_to_binary(num):
    return "{0:b}".format(num)

# The longest run is the longest run of 1's in a binary string.
# Input: Binary String (representing a number)
# Output the maximum number of consecutive 1's in the binary string
def longest_run(num):
    # Initilize the counter variable and the list of counts of consecutive 1's    
    counter = 0
    counts = []

    # Convert the number to binary
    num = num_to_binary(num)
    # Convert binary string to list of binary digits 
    num = list(num)

    # Iterate through the binary digits in the list. 
    for i in range(len(num)):
        if (num[i] == '1'):
            counter += 1
            # Print line is for debugging
            print("Value: %s, Counter: %s" % (num[i], counter))
            continue

        elif (num[i] == '0'):
            counts.append(counter)
            # Print line is for debugging
            print("Value: %s, Counter: %s" % (num[i], counter))
            counter = 0
            continue

    # Return the maximum value from the list of counts of consecutive 1's
    return max(counts)

user_input = int(input("Please enter the digit you would like to compute the longest run of 1's for: "))
print(longest_run(user_input))


### After solving the problem myself, I found this clever implementation on GeeksForGeeks.org
### This brilliant developer used the map and split functions to treat the 0's as deliminters.
### Then he returns all substrings of consecutive 1's and prints the max. Pasting as documentation line for future reference.
### I really like the way he approached the problem
### Link: https://www.geeksforgeeks.org/python-map-length-longest-consecutive-1s-binary-representation-given-integer/
"""
# Function to find Length of the Longest Consecutive 
# 1's in Binary Representation 

def maxConsecutive1(input): 
	# convert number into it's binary 
	input = bin(input) 

	# remove first two characters of output string 
	input = input[2:] 

	# input.split('0') --> splits all sub-strings of 
	# consecutive 1's separated by 0's, output will 
	# be like ['11','1111'] 
	# map(len,input.split('0')) --> map function maps 
	# len function on each sub-string of consecutive 1's 
	# max() returns maximum element from a list 
	print (max(map(len, input.split('0')))) 

# Driver program 
if __name__ == '__main__': 
	input = 222
	maxConsecutive1(input) 
"""