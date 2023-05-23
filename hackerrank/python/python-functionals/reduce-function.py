from fractions import Fraction
from functools import reduce


def product(fracs):
    p = 1
    for i in fracs:
        p *= i
    t = Fraction(p)
    return t.numerator, t.denominator

	
def product(fracs):
    p = 1
    for i in fracs:
        p *= i
    t = Fraction(p)
    return t.numerator, t.denominator

