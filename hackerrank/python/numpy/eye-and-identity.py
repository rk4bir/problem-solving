import numpy as np

np.set_printoptions(sign=' ') # interesting func to seperate np element
n, m = map(int, input().split())

print(np.eye(n, m, k=0))

