from collections import defaultdict


def get_result(A, B):
    for b in B:
        if b in A:
            print(' '.join(str(i+1) for i in range(len(A)) if A[i] == b))
        else:
            print("-1")


n, m = map(int, input().split(' '))
A = []; B = []
for _ in range(n):
    A.append(input())
for _ in range(m):
    B.append(input())

get_result(A, B)



