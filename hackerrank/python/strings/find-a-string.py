#!/usr/bin/python3
def count_substring(string, sub_string):
    count=0
    l = len(string)
    sl = len(sub_string)
    for i in range(l):
        if (i+sl) > l: break
        if sub_string == string[i:(i+sl)]: count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    count = count_substring(string, sub_string)
    print(count)