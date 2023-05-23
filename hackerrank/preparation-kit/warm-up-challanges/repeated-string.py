#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the repeatedString function below.
def repeatedString(s, n):
    complete_string_no = n//len(s); incomplete_len = 0;
    if n/len(s) > complete_string_no: incomplete_len = n -  (complete_string_no * len(s))
    return s.count('a')*complete_string_no + s[:incomplete_len].count('a')


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    n = int(input())
    result = repeatedString(s, n)
    fptr.write(str(result) + '\n')
    fptr.close()

