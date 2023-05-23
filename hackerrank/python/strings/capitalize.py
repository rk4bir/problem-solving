#!/bin/python3


# Complete the solve function below.
def solve(s):
    new = ""; l = s.split(' ')
    for i in l: 
        if len(i) == 0:
            new += ' '
        else:
            new += i[0].upper() + i[1:] 
            new += " " if i != l[-1] else ''
    return new

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = solve(s)
    fptr.write(result + '\n')
    fptr.close()

