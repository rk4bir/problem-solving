from math import degrees, atan

AB = int(input())
BC = int(input())
AC = pow(AB**2 + BC**2, 0.5)
print( str(round(degrees(atan( (AB/2) / (BC/2) )))) + '°')

