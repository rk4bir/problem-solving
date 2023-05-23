import re 
from collections import Counter


def is_valid(string):
    if len(string) != 10: return 'Invalid'
    upper = len(re.findall(r'[A-Z]', string)) >= 2
    numbr = len(re.findall(r'[0-9]', string)) >= 3
    alphn = bool(re.compile(r'^[a-zA-Z0-9]+$').match(string))
    count = all(list(map(lambda c: c[1] == 1, Counter(string).items())))
    if all([upper, numbr, alphn, count]):
        return 'Valid'
    else:
        return 'Invalid' 


for _ in range(int(input())):
    inp = input()
    print(is_valid(inp))

