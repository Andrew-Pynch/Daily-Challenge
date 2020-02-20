def fizz_buzz(upper_bound):
    i = 0
    while i < upper_bound:
        i += 1

        if (i % 3 == 0 and i % 5 == 0):
            print("FizzBuzz")    
        elif (i % 3 == 0):
            print("Fizz")
        elif (i % 5 == 0):
            print("Buzz")
        else:
            print(i)

fizz_buzz(int(input("Please enter the upper bound you would like to run fizz_buzz() up to: ")))