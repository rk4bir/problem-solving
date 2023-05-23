t = int(input())
sales = {}

for _ in range(t):
    log = input().split(' ')
    quote = ' '.join(log[i] for i in range(0, len(log)-1, 1))
    price = int(log[-1])
    if quote in sales:
        sales[quote] += price
    else:
        sales[quote] = price

for k, v in sales.items():
    print(k,v)

