#!/usr/bin/python3

def serialized_string(matrix):
    s = ""
    for i in range(len(matrix[0])):
        for c in matrix:
            s += c[i]
    return s

if __name__ == '__main__':
    nm = input().split()
    n = int(nm[0])
    m = int(nm[1])
    matrix = []
    for _ in range(n):
        matrix_item = input()
        matrix.append(matrix_item)
    string = serialized_string(matrix)
    flag = 0
    substring = []
    tmp = ""
    for c in string:
        if not c.isalnum():
            if flag == 0: flag=1
        if flag == 1:
            if c.isalnum():
                flag = 0
                substring.append(tmp)
                tmp = ""
                continue
            tmp += c
    for s in substring:
        string = string.replace(s, ' ')
    print(string)