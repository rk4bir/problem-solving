import numpy as np 

n, m = map(int, input().split())
mat = np.array([list(map(int, input().split())) for _ in range(n)])
print(mat.transpose())
print(mat.flatten())

