import re


def valid_card(card):
    if '-' in card:
        for g in card.split('-'):
            if len(g) != 4: return False 
    card = card.replace('-', '') 
    # checks: 16 digit, starting with 4/5/6, numeric
    r1 = bool(re.compile(r'^([456]{1}[\d]{15})$').match(card)) 
    # list of strings having repeated more than 3
    r2 = re.findall(r'((\d)\2{3,})', card)
    if r1 and len(r2) < 1: return True 
    return False 


for _ in range(int(input())):
    card = input()
    print('Valid' if valid_card(card) else 'Invalid')

