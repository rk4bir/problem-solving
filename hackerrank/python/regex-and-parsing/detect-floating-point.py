import re


def is_valid(string):
    p1 = re.compile(r"^[+-][0-9]+\.[0-9]+$") # +3.22 or -3.2111
    p2 = re.compile(r"^[0-9]+\.[0-9]+$") # 3.22 or 3.2111
    p3 = re.compile(r"^[+-]\.[0-9]+$") # +.2323 or -.3232
    p4 = re.compile(r"^\.[0-9]+$") # .394394
    return bool(
        bool(p1.match(string)) or  
        bool(p2.match(string)) or 
        bool(p3.match(string)) or 
        bool(p4.match(string))
    )


for _ in range(int(input())):
    string = input()
    print(is_valid(string))

