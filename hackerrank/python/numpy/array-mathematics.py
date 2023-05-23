import numpy as np

n, m = map(int, input().split(' ')); ar = []
for _ in range(n):
    inp = list(map(int, input().split(' ')))
    ar.append(inp)

A = np.array(ar); ar = []
for _ in range(n):
    inp = list(map(int, input().split(' ')))
    ar.append(inp)
B = np.array(ar)

print(A+B)
print(A-B)
print(A*B)
print(A//B)
print(A%B)
print(A**B)

