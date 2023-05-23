#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    result = meal_cost + ( (tip_percent*meal_cost)/100.0 ) + ( (tax_percent*meal_cost)/100.0 )
    print("The total meal cost is " + str(round(result)) + " dollars.")


if __name__ == '__main__':
    meal_cost = float(input())
    tip_percent = int(input())
    tax_percent = int(input())
    solve(meal_cost, tip_percent, tax_percent)

