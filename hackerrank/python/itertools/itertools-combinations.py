from itertools import combinations

string, l = input().split(' ')
string = sorted(string); l = int(l)

for le in range(1, l+1, 1):
    comb = combinations(string, le)
    for s in comb:
        print(''.join(c for c in s))

