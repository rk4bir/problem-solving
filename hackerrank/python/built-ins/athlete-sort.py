#!/bin/python3

if __name__ == '__main__':
	row, col = list(map(int, input().split()))
	athletes = []

	for _ in range(row):
		athletes.append(list(map(int, input().split())))

	k = int(input())
	sorted_athletes = sorted(athletes, key=lambda athlete: athlete[k], reverse=False)

	for row in sorted_athletes:
		for col in row:
			print(col, end=' ')
		print('')
