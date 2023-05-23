cube = lambda x: pow(x,3)

def fibonacci(n):
    a, b = 0, 1; fibs = []
    counter = 0
    while True:
        if counter == n: break
        fibs.append(a)
        a, b = b, a+b 
        counter += 1
    return fibs

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))

