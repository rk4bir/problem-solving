import re

t = int(input())
for _ in range(t):
    regex = input()
    try:
        re.compile(regex)
        print("True")
    except Exception as e:
        print("False")

