import numpy as np

n, m, p = map(int, input().split(' '))
for _ in range(n+m):
    inp = np.array([list(map(int, input().split(' ')))])
    try:
        ar = np.concatenate((ar, inp))
    except:
        ar = inp

print(ar)

