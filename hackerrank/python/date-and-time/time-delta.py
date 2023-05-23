#!/bin/python3

from datetime import datetime
import os


def time_delta(t1, t2):
    fmt = '%a %d %b %Y %H:%M:%S %z'
    output = datetime.strptime(t1, fmt) - datetime.strptime(t2, fmt)
    output = output.total_seconds()
    if output < 0: output *= -1
    return str(int(output))


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    t = int(input())
    for t_itr in range(t):
        t1 = input()
        t2 = input()
        delta = time_delta(t1, t2)
        fptr.write(delta + '\n')
    fptr.close()

