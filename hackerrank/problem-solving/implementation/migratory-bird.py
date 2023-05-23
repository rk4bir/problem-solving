import math
import os
import random
import re
import sys

def migratoryBirds(ar):
    counters = [0]*6
    for n in ar:
        counters[n] += 1
    index = counters.index(max(counters))    
    return index

	if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = migratoryBirds(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
