#!/usr/bin/python3
def print_door(n,m):
    # upper portion
    for i in range(1,n,2):
        s = '.|.'*i; l = (m - len(s)) // 2
        print('-'*l+s+'-'*l)
    # welcome
    l = (m - len("WELCOME")) // 2
    print('-'*l+'WELCOME'+'-'*l)
    # lower portion
    for i in range(n-2,0,-2):
        s = '.|.'*i; l = (m - len(s)) // 2
        print('-'*l+s+'-'*l)


if __name__ == "__main__":
	inp = input().split()
	n = int(inp[0]); m = int(inp[1])
	print_door(n, m)
