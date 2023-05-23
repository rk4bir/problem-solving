if __name__ == "__main__":
	n1 = int(input())
	M  = set(map(int, input().rstrip().split()))
	n2 = int(input())
	N  = set(map(int, input().rstrip().split()))

	results = list(N.difference(M))
	results.append(list(M.difference(N)))
	res = []
	for n in results:
		if type(n) == list:
			for i in n:
				res.append(i)
		else:
			res.append(n)
	res.sort()
	for i in res:
		print(i)