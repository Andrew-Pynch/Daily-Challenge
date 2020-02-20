def get_numbers():
    print("""
    Please enter some numbers,
    each separated by a space: """)

    nums = [int(x) for x in input().split()]
    
    return (nums)


def get_target():
    target = input("Please enter your target number: ")
    return (target)


# Hyper brute force approach. 
# Basically looks for every possible pair of numbers in the list and checks if the sum of the pair returns the target
def two_sum_nieve(numbers, target):
    for i in range(len(numbers) - 1):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                print(numbers[i], numbers[j])
                return True
    # If the algorithm can't find a pair that adds up to the target return False
    return False


'''def two_sum_hashtable(numbers, target):
    ht = dict()
    for i in range(len(numbers)):
        if numbers[i] in ht:
            print(ht[numbers[i]], numbers[i])
            return True
        else:
            ht[target - numbers[i] = numbers[i]]'''
# I need to learn more about hash tables. To be perfectly honest I'm not even sure what they are yet.
# I know that they represent an 80/20 ratio in terms of bang for buck programming concepts... 
# Excited to learn!     