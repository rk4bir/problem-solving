def print_dash(row, size):
    d_size = (2*size - 2)
    d_size = d_size - (2*(row-1))
    print('-'*d_size, end="")
    

def print_middle(row, size):
    letters = "abcdefghijklmnopqrstuvwxyz"
    tmp = ''
    for i in range(size-1, size-row, -1):
        tmp += letters[i] + '-'
    print(tmp, end="")
    print("-".join(letters[p] for p in range(size-row, size, 1)), end="") # middle+right


def print_rangoli(size):

    # upper section: [1, 2, ... size]
    for row in range(1, size+1, 1):
        print_dash(row, size) # left 
        print_middle(row, size) # middle
        print_dash(row, size) # right
        print('')

    # lower section: [size+1, size+2, ... size*2-1]
    for row in range(size-1, 0, -1):
        print_dash(row, size) # left
        print_middle(row, size) # middle
        print_dash(row, size) # right
        print('')



if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
