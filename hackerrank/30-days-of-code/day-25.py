import math


def primeOrNot(n):
    if n == 0 or n == 1:
        return False
    if n > 3:
        if n%2 == 0:
            return False
        for i in range(3,int( math.sqrt(n) )+1,1):
            if n%i == 0:
                return False
    return True


T = int(input())
for i in range(T):
    n = int(input())
    if primeOrNot(n):
        print("Prime")
    else:
        print('Not prime')

