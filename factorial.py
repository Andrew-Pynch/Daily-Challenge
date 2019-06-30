def factorial(n):
    if n == 0:
        return(1)
    else:
        while n > 1:
            result = (n * (n - 1))
            return(result)