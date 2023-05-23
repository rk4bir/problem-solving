import itertools as itr

n    = int(input())
ch   = input().strip()
k    = int(input())

ar   = ch.split(' ')
comb = list(itr.combinations(ar, k))
count= 0

for it in comb:
    if 'a' in it:
        count += 1

print(count/float(len(comb)))

