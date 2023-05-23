#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the diagonalDifference function below.
def diagonalDifference(a):
    n  = len(a)
    d1 = 0
    for i in range(n):
        d1 += a[i][i]
    r  = 0
    c  = n-1
    d2 = 0
    while r < n:
        d2 += a[r][c]
        r += 1
        c -= 1
    res = d1 - d2
    if res < 0:
        res = res*-1
    return res


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input()); a = []
    for _ in range(n):
        a.append(list(map(int, input().rstrip().split())))
    result = diagonalDifference(a)
    fptr.write(str(result) + '\n')
    fptr.close()

