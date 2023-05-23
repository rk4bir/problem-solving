#!/bin/python3
from collections import Counter

if __name__ == '__main__':
    s = input()
    letter_sorted = sorted(dict(Counter(s)).items(), key=lambda el: el[0])
    counter_sorted = sorted(letter_sorted, key=lambda el: el[1], reverse=True)
    for item in [(k,v) for k,v in counter_sorted][:3]:
        print(item[0], item[1])

