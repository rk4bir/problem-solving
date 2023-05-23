#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    arr = []
    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    c1, c2, c3 = 0, 1, 0
    r1, r2, r3 = 0, 1, 2
    _trace = 0
    sums = []
    while r3 < 6:
        if _trace == 4:
            c1, c2, c3 = 0, 1, 0
            r1 += 1; r2 += 1; r3 += 1; _trace = 0
            continue
        tmp = sum(arr[r1][c1:(c1+3)]) + arr[r2][c2] + sum(arr[r3][c3:(c3+3)])
        sums.append(tmp)
        c1 += 1; c2 += 1; c3 += 1; _trace += 1
    print(max(sums))

