from math import sqrt, floor
def szukaj_1(n):
	for i in range(2, n+1):
		pierwsza = True 
		j = 2
		while j < i:
			if i % j == 0:
				pierwsza = False
			j += 1
		if pierwsza:
			print(i, end=' ')

def szukaj_2(n):
	"""
	Funkcja szuuka liczb pierwszych przy użyciu algorytmu zwanego sitem Eratostenesa
	"""
	sito = [True] * (n+1)
	for i in range(2, floor(sqrt(n))+1):
		c = 5
		if sito[i]:
			j = i + i
			while j <= n:
				sito[j] = False
		print(c)
	


def main():
	n = int(input("Podaj zakres: "))
	szukaj_2(n)
	
	return 0
	
	
main()
