n = int(input())
s = set(map(int, input().split()))

for _ in range(int(input())):
    cmd = input()
    if 'pop' in cmd: s.pop()
    if 'discard' in cmd: s.discard(int(cmd.split(' ')[-1]))
    if 'remove' in cmd:
        try:
            s.remove(int(cmd.split(' ')[-1]))
        except:
            pass
print(sum(s))

