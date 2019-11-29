def reverse_int(num):
    num = str(num)
    num = list(num)

    print("Input: " + str(num))

    reversed_num = []
    
    for i in range(len(num)):
        current = num.pop()
        reversed_num.append(current)

    print("Output: " + str(reversed_num))


reverse_int(123)