from random import randint

def main():
	liczba = randint(1, 1000)
	typ = int(input("Jaką liczbę wylosowałem? "))
	licznik = 0
	while typ != liczba:
		licznik += 1
		if typ > liczba:
			print("Podałeś liczbę większą!")
		else:
			print("Podałeś liczbę mniejszą!")
		typ = int(input("Jaką liczbę wylosowałem? "))
	print(f"Odgadłeś w {licznik} próbach!")
	return 0


main()
