import re

css = ""
for _ in range(int(input())):
    css += input() + '\n'
for cc in re.findall(r'(?<=[ :])(#[a-fA-F0-9]+)', css):
    if len(cc) == 4 or len(cc) == 7: print(cc)

