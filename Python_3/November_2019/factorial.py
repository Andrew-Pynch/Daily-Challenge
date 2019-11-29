n = int(input("Please enter a positive number: "))

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

print("Factorial of %s! is %s" % (n, factorial(n)))