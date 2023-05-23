n = input()
A = input().split(' '); A = set(map(int, A))

for _ in range(int(input())):
    cmd = input().split(' ')
    B = input().split(' '); B = set(map(int, B))
    if 'update' in cmd:
        A.update(B)
    if 'intersection_update' in cmd:
        A.intersection_update(B) 
    if 'difference_update' in cmd: 
        A.difference_update(B)
    if 'symmetric_difference_update' in cmd:
        A.symmetric_difference_update(B)

print(sum(A))

