#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sprawdz_srednia.py


def main(args):
	lista_liczb = []
	z = int(input('Ile ocen? '))
	i = 0
	while i < z:
		i += 1
		x = (int(input('Podaj ocene: ')))
		if 1 <= x <= 6:
			lista_liczb.append(x)
		else:
			i -= 1
			print('Podaj prawdziwą ocenę! ')
	ilosc_liczb = len(lista_liczb) 
	suma = 0
	srednia = 0
	for liczba in lista_liczb:
		suma = suma + liczba
	srednia = suma / ilosc_liczb
	print('Srednia z liczb to: ' + str(srednia) )
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
