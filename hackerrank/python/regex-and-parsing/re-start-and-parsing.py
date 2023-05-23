import re

if __name__ == '__main__':
    string =  input()
    sub_string = input()

    match = re.compile(sub_string).search(string, pos=0)
    if not match: print('(-1, -1)')

    while match:
        print('(%d, %d)'%(match.start(), match.end()-1))
        match = re.compile(sub_string).search(string, pos=match.start() + 1)
