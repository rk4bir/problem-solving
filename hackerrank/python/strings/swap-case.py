#!/usr/bin/python3
def swap_case(s):
    out = ''
    for c in s:
        out += c.lower() if c.isupper() else c.upper()
    return out


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
