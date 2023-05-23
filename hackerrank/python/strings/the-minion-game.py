def minion_game(string):
    stuart = 0; kevin = 0; l = len(string)
    for i in range(l):
        if string[i] in 'AEIOU':
            kevin += l - i
        else:
            stuart += l - i
    if stuart == kevin:
        print('Draw')
    elif stuart > kevin:
        print('Stuart', stuart)
    else:
        print('Kevin', kevin)

if __name__ == '__main__':
    s = input()
    minion_game(s)
