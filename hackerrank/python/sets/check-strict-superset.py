A = set(input().split(' ')); out = True

for _ in range(int(input())):
    s = set(input().split(' '))
    if A.intersection(s) != s or (len(s) - len(A)) > -1:
        out = False
        break  
    
print(out)

