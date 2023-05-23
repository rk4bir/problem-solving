#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the countingValleys function below.
def countingValleys(n, s):
    counter = 0; valley = 0
    for i, c in enumerate(s):
        if c == 'U': counter += 1
        if c == 'D': counter -= 1
        if counter == 0 and i > 0 and c == 'U': valley += 1
    return valley


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    s = input()
    result = countingValleys(n, s)
    fptr.write(str(result) + '\n')
    fptr.close()

