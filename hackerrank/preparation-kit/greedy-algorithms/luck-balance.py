#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the luckBalance function below.
def luckBalance(n, k, contests):
    imp = 0; res = 0; contests.sort(reverse=True)
    # Count imp no
    for row in contests:
        if row[1] == 1:
            imp += 1
        else:    
            res += row[0]
    counter = 1; took = []
    for row in contests:
        if row[1] == 1:
            if counter > k: break
            res += row[0]; counter += 1; took.append(row[0])
    for row in contests:
        if row[1] == 1:
            if row[0] not in took: res -= row[0]
    return res

            
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])
    contests = []
    for _ in range(n):
        contests.append(list(map(int, input().rstrip().split())))
    result = luckBalance(n, k, contests)
    fptr.write(str(result) + '\n')
    fptr.close()

