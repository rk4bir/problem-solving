import re 

c = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
v = "aeiouAEIOU"
pattern = r'[%s]([%s]{2,})(?=[%s])'%(c,v,c)
output = re.findall(pattern, input())
if len(output) == 0:
    print('-1')
else:
    for o in output:
        print(o)

