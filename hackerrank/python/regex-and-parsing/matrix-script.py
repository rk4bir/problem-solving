#!/usr/bin/python3
import re

def serialized_string(matrix):
    s = ""
    for i in range(len(matrix[0])):
        for c in matrix:
            s += c[i]
    return s

nm = input().split()
n = int(nm[0])
m = int(nm[1])
matrix = []
for _ in range(n):
    matrix_item = input()
    matrix.append(matrix_item)
string = serialized_string(matrix)
print(re.sub(r"([\w])([\W]+)([\w])", r'\1 \3', string))
