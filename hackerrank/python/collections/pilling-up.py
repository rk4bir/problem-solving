def get_result(cubes):
    if cubes[0] >= cubes[len(cubes)-1]:
        base = cubes[0]; cubes.pop(0) 
    else:
        base = cubes[len(cubes)-1]; cubes.pop(len(cubes)-1)
    while len(cubes) > 0:
        u_next = len(cubes) - 1
        if cubes[0] >= cubes[len(cubes)-1]: u_next = 0            
        if base >= cubes[u_next]:
            base = cubes[u_next]; cubes.pop(u_next)
            continue
        return 'No'
    return 'Yes'


for _ in range(int(input())):
    n = input()
    cubes = list(map(int, input().split()))
    print(get_result(cubes))

