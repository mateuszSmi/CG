#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  stos2.py


stos = []
SP = 0 # stack pointer

def push(rozmiar, dane):
    global SP, stos
    if SP < rozmiar:
        stos[SP] = dane
        SP += 1
    else:
        print("Stack overflow!")
        
def pop(rozmiar):
    global SP, stos
    SP -= 1
    if SP < rozmiar:
        print(stos[SP])
    else:
        print("Stack overflow!")


def main(args):
    global SP, stos
    rozmiar = 5
    stos = [None] * rozmiar
    push(rozmiar, 2)
    push(rozmiar, 3)
    push(rozmiar, 6)
    print("Wskaźnik: ", SP)
    pop(rozmiar)
    pop(rozmiar)
    pop(rozmiar)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
