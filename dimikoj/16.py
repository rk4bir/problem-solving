def reverse_word(word):
	return ''.join(word[i] for i in range(len(word)-1, -1, -1))


def get_reversed_line(words):
	words = map(reverse_word, words)
	return ' '.join(word for word in words)


if __name__ == "__main__":
	t = int(input())
	for i in range(t):
		string = input()
		print(get_reversed_line(string.split(' ')))
