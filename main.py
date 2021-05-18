from math import pi

def main(args):
    li = 100
    lf = 12.12345678
    print("{} - tekst - {}".format(li, lf))
    print("{:10.4f}".format(pi))
    print(hex(li), oct(li), bin(li))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))