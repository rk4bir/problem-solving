import re
m = re.search(r'([a-zA-Z0-9])\1+', input().strip())
print(m.group(1) if m else -1)


'''
# cheated with :D 
import string

s = input()
constraints = string.ascii_letters + string.digits
ck = False
for i in range(len(s)):
    if i+1 <= len(s)-1 and s[i] in constraints and s[i] == s[i+1]:
        print(s[i]); ck = True
        break

if not ck:
    print('-1')
'''
