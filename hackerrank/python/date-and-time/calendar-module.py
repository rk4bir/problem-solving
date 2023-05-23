from datetime import datetime


mm, dd, yyy = map(int, input().split(' '))
d = datetime(yyy, mm, dd)
print(d.strftime('%A').upper())

