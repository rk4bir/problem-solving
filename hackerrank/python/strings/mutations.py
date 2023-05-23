def mutate_string(string, position, character):
    s = [c for c in string]
    s[position] = character
    return ''.join(c for c in s)


if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)

