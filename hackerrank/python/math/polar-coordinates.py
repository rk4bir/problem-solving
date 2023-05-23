import cmath

z = complex(input())
x, y = z.real, z.imag
r = round(pow(x**2 + y**2, 0.5 ), 3)
theta = round(cmath.phase(z), 3)
print(r)
print(theta)

