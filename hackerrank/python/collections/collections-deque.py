from collections import deque

d = deque()
for _ in range(int(input())):
    cmd = input()
    if 'appendleft' in cmd:
        d.appendleft(int(cmd.split(' ')[-1])); continue
    if 'append' in cmd:
        d.append(int(cmd.split(' ')[-1]))
    if 'popleft' in cmd:
        d.popleft(); continue
    if 'pop' in cmd:
        d.pop()

print(' '.join(str(v) for v in d))

