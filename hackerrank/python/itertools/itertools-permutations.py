from itertools import permutations

string, l = input().split(' ')
l = int(l)
string = sorted(string)
per = list(permutations(string, l))
for s in per:
    print(''.join(c for c in s))

