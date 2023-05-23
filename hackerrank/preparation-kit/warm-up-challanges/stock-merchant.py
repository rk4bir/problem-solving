#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    result = 0; counter= 0; counted= []
    for n in ar:
        for n1 in ar:
            if n in counted: break
            if n == n1: counter += 1
        result += (counter//2); counter = 0; counted.append(n)
    return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    ar = list(map(int, input().rstrip().split()))
    result = sockMerchant(n, ar)
    fptr.write(str(result) + '\n')
    fptr.close()

