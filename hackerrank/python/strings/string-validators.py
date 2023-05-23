#!/usr/bin/python3
import re
def get_result(string, pattern):
    for s in string:
        if re.compile(pattern).match(s):
            return 'True'
        else:
            continue
    return 'False'
    
def showOutput(string):
        print(get_result(string, "^[a-zA-Z0-9]+$"))
        print(get_result(string, "^[a-zA-Z]+$"))
        print(get_result(string, "^[0-9]+$"))
        print(get_result(string, "^[a-z]+$"))
        print(get_result(string, "^[A-Z]+$"))
        
if __name__ == '__main__':
    s = input()
    showOutput(s)