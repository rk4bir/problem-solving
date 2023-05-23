def getEvens(line):
    result = line[0]
    for i in range(1, len(line), 1):
        if i%2==0:
            result += line[i]
    return result

def getOdds(line):
    result = ""
    for i in range(1, len(line), 1):
        if i%2==1:
            result += line[i]
    return result

T = int(input())
for case in range(T):
    line = input()
    print(getEvens(line), getOdds(line))

