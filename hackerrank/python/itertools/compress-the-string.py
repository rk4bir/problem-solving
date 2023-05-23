def get_count(string, pos):
    count = 1
    for i in range(pos+1, len(string), 1):
        if string[pos] == string[i]:
            count += 1
        else:
            break
    return count


string = input()
i = 0
while i !=- 1 and i < len(string):
    count = get_count(string, i)
    print("(%d, %c)"%(count, string[i]), end=" ")
    i += count
