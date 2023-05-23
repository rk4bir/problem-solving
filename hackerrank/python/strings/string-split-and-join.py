#!/usr/bin/python3

def split_and_join(line):
    line = line.split(' ')
    return '-'.join(c for c in line)

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)