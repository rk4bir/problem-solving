if __name__ == "__main__":
	t = int(input())
	vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
	for i in range(t):
		string = input()
		counter = 0
		for v in vowels:
			counter += string.count(v)
		print("Number of vowels =", counter)
