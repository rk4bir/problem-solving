#!/usr/bin/python3

if __name__ == '__main__':
    N = int(input())
    arr = []
    for i in range(N):
        cmd = input().split(' ')
        if 'insert' in cmd:
            arr.insert(int(cmd[1]), int(cmd[2]))
        if 'print' in cmd:
            print(arr)
        if 'remove' in cmd:
            arr.remove(int(cmd[1]))
        if 'append' in cmd:
            arr.append(int(cmd[1]))
        if 'sort' in cmd:
            arr.sort()
        if 'pop' in cmd:
            arr.pop()
        if 'reverse' in cmd:
            arr.reverse()