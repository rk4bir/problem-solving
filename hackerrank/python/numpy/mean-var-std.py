import numpy as np

np.set_printoptions(sign=' ')

n, m = map(int, input().split())
ar = [list(map(int, input().split())) for _ in range(n)]

ar = np.array(ar)
print(ar.mean(axis=1))
print(ar.var(axis=0))
print(round(ar.std(axis=None), 12))

