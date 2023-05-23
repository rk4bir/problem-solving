import math

class Complex(object):

    def __init__(self, real, imaginary):
        self.c = complex(real, imaginary)
    
    def __add__(self, no):
        return self.str(self.c + no.c)

    def __sub__(self, no):
        return self.str(self.c - no.c)

    def __mul__(self, no):
        return self.str(self.c * no.c)

    def __truediv__(self, no):
        return self.str(self.c / no.c)

    def mod(self):
        return self.str(complex(abs(self.c), 0))
    
    def str(self, out):
        imaginary = out.imag if out.imag >= 0.0 else -1*out.imag
        if imaginary == 0: imaginary = 0
        return "%.2f%c%.2fi"%(
            out.real, 
            '+' if out.imag >= 0.0 else '-', 
            imaginary,
        )


if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x+y, x-y, x*y, x/y, x.mod(), y.mod()]), sep='\n')


