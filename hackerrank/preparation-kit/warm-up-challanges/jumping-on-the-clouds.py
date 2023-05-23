#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    jump = 0; l = len(c); i = 0
    while True:
        if i+1 < l and i+2 < l:
            if c[i+1] == 0 and c[i+2] == 0: jump += 1; i += 2; continue
            if c[i+1] == 0 and c[i+2] == 1: jump += 1; i += 1; continue
            if c[i+1] == 1 and c[i+2] == 0: jump += 1; i += 2; continue
        if i+1 < l and i+2 >= l:
            if c[i+1] == 0: jump += 1; i += 1; continue
        if i >= l: break
        i += 1
    return jump


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    c = list(map(int, input().rstrip().split()))
    result = jumpingOnClouds(c)
    fptr.write(str(result) + '\n')
    fptr.close()

