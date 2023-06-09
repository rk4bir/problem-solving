#!/bin/python3

import os
import sys

#
# Complete the gradingStudents function below.
#
def gradingStudents(grades):
    for i in range(len(grades)):
        if grades[i] > 37:
            if ( (grades[i] + 2) % 5 ) == 0:
                grades[i] += 2
            if ( (grades[i] + 1) % 5 ) == 0:
                grades[i] += 1
    return grades


if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input()); grades = []
    for _ in range(n):
        grades_item = int(input())
        grades.append(grades_item)

    result = gradingStudents(grades)
    f.write('\n'.join(map(str, result)))
    f.write('\n')
    f.close()

