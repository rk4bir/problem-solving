import re


def valid(phone):
    return bool(re.compile(r'^([7-9][0-9]{9})$').match(phone))


for _ in range(int(input())):
    phone = input()
    if valid(phone):
        print("YES")
    else:
        print("NO")

