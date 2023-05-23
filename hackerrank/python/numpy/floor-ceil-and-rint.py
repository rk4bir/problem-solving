import numpy as np

np.set_printoptions(sign=' ') # interesting func to seperate np element
ar = np.array(list(map(float, input().split())), dtype=float)

print(str(np.floor(ar)))
print(str(np.ceil(ar)))
print(str(np.rint(ar)))

