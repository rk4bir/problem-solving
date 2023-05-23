t = int(input())
for i in range(t):
	num = list(map(int, input().split()))
	num.sort()
	print("Case %s: "%(i+1) + ' '.join(str(i) for i in num))
