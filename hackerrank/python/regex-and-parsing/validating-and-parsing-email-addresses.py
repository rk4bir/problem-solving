import re
import string 


def valid(email):
    if email[0] not in string.ascii_lowercase+string.ascii_uppercase:
        return False
    return bool(re.compile(r'^([a-zA-Z0-9-_.]+@[a-z]+\.[a-z]{1,3})$').match(email))


for _ in range(int(input())):
    inp = input()
    if valid(inp.split(' ')[-1][1:-1]):
        print(inp)

