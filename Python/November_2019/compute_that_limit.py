from sympy import var
from sympy import simplify


def compute_limit():
    x = 3
    function = x ** 2
    
    limit = ((function-0.0001) + (function+0.0001))/2
    print(limit)

compute_limit()
