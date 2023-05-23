#!/bin/python3

import sys

S = input().strip()
try:
    integer = int(S)
    print(integer)
except:
    print("Bad String")

