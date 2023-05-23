#!/bin/python3


if __name__ == '__main__':
    N = int(input())
    if (N % 2 == 0 and N >= 2 and N <= 5) or ( N % 2 == 0 and  N > 20 ):
        print('Not Weird')
    if N % 2 == 1 or (N % 2 == 0 and N >= 6 and N <= 20):
        print("Weird")
    

