import numpy as np

n = int(input()); matrix = []
for _ in range(n): 
    matrix.append(list(map(float, input().split())))

matrix = np.matrix(matrix)
print(round(np.linalg.det(matrix), 2))

