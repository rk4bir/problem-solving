from collections import namedtuple

n = int(input()); 
sum_ = 0.00
Marksheet = namedtuple("Marksheet", input().strip().split())
for _ in range(n):
    s = Marksheet(*input().strip().split())
    sum_ += float(s.MARKS)
print(round(sum_/n, 2))

