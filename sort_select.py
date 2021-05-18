#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_select.py


def sort_select(lista, n):
	for i in range(n):
		min = i
		for j in range(i+1, n):
			if lista[min] > lista[j]:
				min = j
				
				
		lista[i], lista[min] = lista[min], lista[i]
	return lista



def main(args):
	lista = [23, 100, 34, 55, 1, 66]
	n = len(lista)
	
	lista = sort_select(lista, n)
	print(lista)
	
	
	return 0

if __name__ == '__main__':
	import sys
	sys.exit(main(sys.argv))
