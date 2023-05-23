n, m = input().split(' ')
ar = input().split(' ')
A = set(input().split(' '))
B = set(input().split(' '))

output = 0
for i in ar:
    if i in A: output += 1
    if i in B: output -= 1
print(output)

