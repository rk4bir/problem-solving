#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
numberOfSwaps = 0
for i in range(n):
    for j in range(i+1, n, 1):
        if a[i] > a[j]:
            tmp  = a[i]
            a[i] = a[j]
            a[j] = tmp
            numberOfSwaps += 1

print("Array is sorted in " + str(numberOfSwaps) +  " swaps.")
print("First Element:", a[0])
print("Last Element:",a[(len(a)-1)])

