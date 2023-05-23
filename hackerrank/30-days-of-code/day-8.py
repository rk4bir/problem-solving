N = int(input())
pBook = {}
for i in range(N):
    key, value = input().strip().split()
    pBook[key] = value
while True:
    q = input()
    if q in pBook:
        print(q + "=" + pBook[q])
    else:
        print("Not found")

