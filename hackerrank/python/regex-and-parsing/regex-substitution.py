import re

code = ""
for _ in range(int(input())):
    code += input() + '\n'

code = re.sub('(?<= )([&]{2}[ ])', 'and ', code)
code = re.sub('(?<= )([|]{2}[ ])', 'or ', code)
print(code)

