#!/usr/bin/env python
# -*- coding: utf-8 -*-


from math import pi

def main(args):
	a = [] # rozpocząć pustą listę
	n = int(input()) # odczytać numer elementu na liście
	for i in range(n): 
		new_element = int(input()) # przeczytaj następny element
		a.append(new_element) # dodaj go do listy
    # dwie ostatnie linie można zastąpić jedną:
    # a.append (int (input ()))
	print(a)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
