def show_cartesian_product(A, B):
    result = []
    for a in A:
        for b in B:
            print("(%d, %d)"%(a,b), end=' ')



A = list(map(int, input().split(' ')))
B = list(map(int, input().split(' ')))
show_cartesian_product(A, B)
