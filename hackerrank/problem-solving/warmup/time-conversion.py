#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    result = s[:2]
    hour = s.split(':')[0]
    hour = int(hour) 
    if 'PM' in s:
        if hour < 12:    
            hour += 12
        if hour > 23:
            hour = '00'
        result = str(hour)
    else:
        if hour > 11:
            hour = '00'
            result = str(hour)
    result += s[2:-2]
    return result

    
if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = timeConversion(s)
    f.write(result + '\n')
    f.close()

