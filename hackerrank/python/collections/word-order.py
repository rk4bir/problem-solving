from collections import Counter

n = int(input()); inputs = []

for _ in range(n):
    inputs.append(input())

count = Counter(inputs)
print(len(count))
print(' '.join(str(v) for k,v in count.items()))

