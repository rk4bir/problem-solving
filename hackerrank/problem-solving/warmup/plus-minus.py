#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pves, nves, zeros = 0, 0, 0
    for num in arr:
        if num > 0:
            pves += 1
        if num < 0:
            nves += 1
        if num == 0:
            zeros += 1
    leng = len(arr)
    pf = pves/float(leng)
    nf = nves/float(leng)
    zf = zeros/float(leng)
    print(pf)
    print(nf)
    print(zf)

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    plusMinus(arr)

