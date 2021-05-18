def l10_2x(l10, podst_k):
	reszty = []
	while l10 != 0:
		reszta = l10 % podst_k
		if reszta > 9:
			reszta = chr(reszta + 55)
		reszty.append(str(reszta))
		l10 = l10 // podst_k
	reszty.reverse()
	return ''.join(reszty)
	
	
def l2dec(liczba_p, podst_p):
	if podst_p == 10:
		suma = liczba_p
		return suma
		
	elif podst_p <= 9:
		reszty = []
		licz = 0
		suma = 0
		liczba_p = str(liczba_p)
		x = len(liczba_p)
		for i in range(0 ,x):
			liczba_p[i]
			reszty.append(str(liczba_p[i]))
		reszty.reverse()
		for n in range(0 ,x):
			licz = int(reszty[n])*(podst_p**n)
			suma = suma + licz
		return suma
	
	elif podst_p >=11:
		reszty = []
		pomoc = []
		licz = 0
		suma = 0
		liczba_p = str(liczba_p)
		x = len(liczba_p)
		for i in range(0 ,x):
			if 65 <= ord(liczba_p[i]) <= 70: 
				pomoc.append(ord(liczba_p[i]))
				reszty.append(str(int(pomoc[i]) - 55))
			elif 97 <= ord(liczba_p[i]) <= 102: 
				pomoc.append(ord(liczba_p[i]))
				reszty.append(str(int(pomoc[i]) - 87))
			else: 
				reszty.append(str(liczba_p[i]))
		reszty.reverse()
		for n in range(0 ,x):
			licz = int(reszty[n])*(podst_p**n)
			suma = suma + licz
		return suma

def l2dec2(liczba_p, podst_p):
	if podst_p == 10:
		return liczba_p
	l10 = 0
	liczba_p = [ord(x) - 55 if 64 < ord(x) < 71 else int(x) for x in liczba_p[::-1].upper() ]
	for i, v in enumerate(liczba_p):
		l10 += v*podst_p**i
		
	return l10
			

def main():
	liczba_p = input("Podaj liczbe wejściową: ")
	podst_p = int(input("Podaj podstawe systemu wejściowego <od 2 do 16>: "))
	podst_k = int(input("Podaj podstawe systemu liczbowego "))
	
	l10 =l2dec2(liczba_p, podst_p)
	print(l10)
	print(l10_2x(l10, podst_k))
	
	
	
	return 0


main()
