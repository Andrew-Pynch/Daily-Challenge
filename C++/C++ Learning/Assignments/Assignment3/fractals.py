def pattern(n, col):
    if (n == 0):
        print(" ")
        print("* ")
    
    pattern(n-2, col+2)

    for i in range(col):
        print(" ")

    for i in range(n):
        print("* ")

    pattern(n-2, col+2)