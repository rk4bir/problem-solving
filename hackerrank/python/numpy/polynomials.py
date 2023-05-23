import numpy as np

coefficients = list(map(float, input().split()))
x = int(input())
print(np.polyval(coefficients, x))

