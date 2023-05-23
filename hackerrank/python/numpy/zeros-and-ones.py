import numpy as np

shape = list(map(int, input().split(' ')))

print(np.zeros(shape, dtype=int))
print(np.ones(shape, dtype=int))

