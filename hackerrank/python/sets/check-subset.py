for _ in range(int(input())):
    size = input()
    A = set(input().split(' '))
    size = input()
    B = set(input().split(' '))
    if B.intersection(A) == A:
        print('True')
    else:
        print("False")

