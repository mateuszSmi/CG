from random import randint

n = 100
liczby = []

def losuj(n):
	for i in range(n):
		liczby.append(randint(1, 100))
	liczby.sort()
		
def binarne(lewy, prawy, szuk):
	if lewy <= prawy:
		srodek = (lewy + prawy) // 2
		if liczby[srodek] == szuk:
			return srodek
		if liczby[srodek] < szuk:
			return binarne(srodek + 1, prawy, szuk)
		else:
			return binarne(lewy, srodek - 1, szuk)
	else:
		return -1
		
		
def main():
	losuj(n)
	print(liczby)
	szukany = int(input("Podaj szukana liczbę: "))
	lewy = 0
	prawy = n - 1
	if binarne(lewy, prawy, szukany) > -1:
		print("Znaleziony")
	else:
		print("Nie znalazłem")
		
main()
