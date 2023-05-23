x, k = map(int, input().split(' '))
poly = input()
out = True if k == eval(poly, {'x': x}) else False
print(out)

