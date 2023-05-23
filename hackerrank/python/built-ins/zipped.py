col, row = map(int, input().split(' '))
scores = [0]*col
for r in range(row):
    inp = list(map(float, input().split(' ')))
    for c in range(col): scores[c] += inp[c]

for c in range(col): print(round(scores[c]/row, 2))

