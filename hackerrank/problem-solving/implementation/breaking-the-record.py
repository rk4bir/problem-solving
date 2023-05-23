import math
import os
import random
import re
import sys

def breakingRecords(scores):
    mini  = scores[0]
    maxi  = scores[0]
    min_c = 0
    max_c = 0
    for score in scores:
        # minimum check
        if mini < score:
            min_c += 1
            mini   = score
        # maximum check
        if maxi > score:
            max_c += 1
            maxi   = score
    return (min_c, max_c)
	
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    scores = list(map(int, input().rstrip().split()))
    result = breakingRecords(scores)
    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
