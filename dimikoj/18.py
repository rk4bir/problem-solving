if __name__ == "__main__":
	t = int(input())
	VOWELS = "aeiouAEIOU"
	CONSONANTS = 'bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ'
	for i in range(t):
		string = input()
		vowels = ""; consonants = ""
		for ch in string:
			if ch in VOWELS: vowels += ch
			if ch in CONSONANTS: consonants += ch
		print(vowels)
		print(consonants)

