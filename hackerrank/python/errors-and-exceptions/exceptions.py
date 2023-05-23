t = int(input())

for _ in range(t):
    a, b = input().split(' ')
    try:
        a = int(a); b = int(b)
    except Exception as e:
        print('Error Code:', e)
        continue
    if b == 0:
        print("Error Code: integer division or modulo by zero")
        continue
    print(a//b)

