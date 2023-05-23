#!/bin/python3
import itertools

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    indexes = list(itertools.combinations([0, 1, 2, 3, 4], 4))
    sums    = []
    for index in indexes:
        tmp = 0
        for i in index:
            tmp += arr[i]
        sums.append(tmp)
    ma = max(sums)
    mi = min(sums)
    print(mi, ma)


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))
    miniMaxSum(arr)

