#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    sp = n - 1 # decrease by 1 in each loop
    hs = 1     # increase by 1 in each loop
    for loop in range(1, n+1, 1):
        #print spaces
        for space in range(sp):
            print(' ', end='')
        sp -= 1
        # print hashs
        for hashh in range(hs):
            print('#', end='')
        hs += 1
        print()
if __name__ == '__main__':
    n = int(input())
    staircase(n)    

