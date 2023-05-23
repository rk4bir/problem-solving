from collections import Counter


k = input()
rooms = input().split(' ')
for k,v in Counter(rooms).items():
    if v == 1:
        print(k)
        break

