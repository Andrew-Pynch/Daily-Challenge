import math

def pythagorean(side_a, side_b, units):
    side_c = side_a**2 + side_b**2
    print("side_c is %s %s long" % (side_c, units))

pythagorean(2, 3, 'inches')