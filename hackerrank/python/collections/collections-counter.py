from collections import Counter

shoes = int(input())
shoes_list = list(map(int, input().split(' ')))
stock = dict(Counter(shoes_list))
sales = int(input())
sold = 0
for i in range(sales):
    size, price = map(int, input().split(' '))
    if stock.get(size) != None:
        if stock[size] > 0:
            stock[size] -= 1
            sold += price
print(sold)
