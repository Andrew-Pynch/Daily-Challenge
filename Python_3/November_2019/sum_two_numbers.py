def get_numbers():
    print("""
    Please enter some numbers,
    each separated by a space: """)

    nums = [int(x) for x in input().split()]
    
    return (nums)


def get_target():
    target = input("Please enter your target number: ")
    return (target)


def two_sum(numbers, target):
    for i in range(len(numbers)):
        print(numbers[i])
    
    for i in range(len(numbers[::-1])):
        print(numbers[i])

#two_sum(get_numbers(), get_target())
two_sum([1, 2, 3], 3)

