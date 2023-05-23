import math
import os
import random
import re
import sys

def solve(s, d, m):
    counter = 0
    for i in range(0,len(s),1):
        total = 0
        if (i+m) > len(s):
            break
        for j in range(i,i+m, 1):
            total += s[j]
        if total == d:
            counter += 1
     
    return counter
	
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    s = list(map(int, input().rstrip().split()))
    dm = input().split()
    d = int(dm[0])
    m = int(dm[1])
    result = solve(s, d, m)
    fptr.write(str(result) + '\n')
    fptr.close()
