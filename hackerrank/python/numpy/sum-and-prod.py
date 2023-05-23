import numpy as np

n, m = map(int, input().split()); ar = []
for _ in range(n):
    ar.append(list(map(int, input().split())))

print(np.array(ar).sum(axis=0).prod())

