n = input()
inp = list(map(int, input().split(' ')))
all_ = all(map(lambda x: x >= 0, inp))
any_ = any(map(lambda x: x[::-1] == x, map(str, inp)))
print(all_ and any_)

