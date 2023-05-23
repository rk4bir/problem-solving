#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(a, b):
    ar, br = 0, 0
    if a[0] > b[0]:
        ar += 1
    elif a[0] < b[0]:
        br += 1
    if a[1] > b[1]:
        ar += 1
    elif a[1] < b[1]:
        br += 1
    if a[2] > b[2]:
        ar += 1
    elif a[2] < b[2]:
        br += 1    
    return (ar, br)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))
    result = solve(a, b)
    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')
    fptr.close()

