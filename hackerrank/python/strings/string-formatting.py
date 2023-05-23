def print_formatted(number):
    l_b = len(str(bin(number))) - 2 # Because: 111 = 0b111
    for n in range(1, number+1, 1):
        o = str(oct(n)).replace("0o", '')
        h = str(hex(n)).replace("0x", '').upper()
        b = str(bin(n)).replace("0b", '')

        # evaluating spaces before value
        sp_d = l_b - len(str(n))
        sp_o = l_b - len(o)
        sp_h = l_b - len(h)
        sp_b = l_b - len(b)
        
        # format: val <space>val <space>val <space>val
        print("%s%d %s%s %s%s %s%s"%(
                ' '*sp_d, n, 
                ' '*sp_o, o, 
                ' '*sp_h, h, 
                ' '*sp_b, b
            )
        )
        

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
