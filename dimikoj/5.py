def draw_square(n):
	for i in range(n):
		print('*'*n)


t = int(input())
for i in range(t):
	n = int(input())
	draw_square(n)
	if i != (t-1):
		print('')
