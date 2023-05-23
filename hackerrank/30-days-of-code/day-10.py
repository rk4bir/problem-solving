#!/bin/python3

import math
import os
import random
import re
import sys


def maxConsecutive_1(n):
    counts = []
    binaries = bin(n)[2:]
    counter = 0
    for b in binaries:
        if b == '1':
            counter += 1
        else:
            if counter > 0:
                counts.append(counter)
                counter = 0
    counts.append(counter)
    print(max(counts))


if __name__ == '__main__':
    n = int(input())
    maxConsecutive_1(n)

