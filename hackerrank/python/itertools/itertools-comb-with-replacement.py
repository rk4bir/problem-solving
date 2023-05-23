from itertools import combinations_with_replacement


string, l = input().split(' ')
string = sorted(string); l = int(l)
output = combinations_with_replacement(string, l)

for line in output:
    print(''.join(c for c in line))

