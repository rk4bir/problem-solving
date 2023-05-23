import os
import sys

def pageCount(n, p):
    if p%2 == 1:
        p -= 1
    s_t = p//2 # steps for start to target page
    if n%2 == 1:
        n -= 1
    s_e = n//2 # steps for start to last page
    e_t = s_e - s_t # steps for last to target page
    
    # comparing both results
    if s_t < e_t:
        return s_t
    else:
        return e_t

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    p = int(input())
    result = pageCount(n, p)
    fptr.write(str(result) + '\n')
    fptr.close()
