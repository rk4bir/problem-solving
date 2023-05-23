#!/usr/bin/python3

def printDirections(size, val_):
    for i in range(size):
        print(val_)

def displayPathtoPrincess(n,grid):
    row = 0
    for v in grid:
        if v.find('m') != -1:
            m = [row, v.find('m')]
        if v.find('p') != -1:
            p = [row, v.find('p')]
        row += 1
    r_distance = m[0] - p[0]
    c_distance = m[1] - p[1]
    if r_distance < 0:
        printDirections((-1*r_distance), 'DOWN')
    else:
        printDirections(r_distance, 'UP')
    if c_distance < 0:
        printDirections((-1*c_distance), 'RIGHT')
    else:
        printDirections(c_distance, 'LEFT')

if __name__ == '__main__':
    m = int(input())
    grid = [] 
    for i in range(0, m): 
        grid.append(input().strip())
    displayPathtoPrincess(m,grid)