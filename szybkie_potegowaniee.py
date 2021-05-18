def dec2bin(l):
	lbin = []
	while l != 0:
		lbin.append(l % 2)
		l //= 2
	lbin.reverse()
	return lbin


def poteguj2(x, k):
	k = dec2bin(k)
	print(k)
	k.reverse()
	p = x
	for i in range(len(k) - 2, -1, -1):
		if k[i] == 1:
			p = p * p * x
		else:
			p = p * p
	return p
	

def poteguj3(x, k):
	liczbabin = []
	t = x
	i = 0
	while k != 0:
		liczbabin.append(k % 2)
		k //= 2
		if liczbabin[i+1] == 1:
			t = t * t * x
		else:
			t = t * t
		i+=1
		
		
	return t
	


def main():
	k = int(input("Podaj wykładnik:"))
	x = float(input("Podaj podstawę:"))
	print(poteguj2(x, k))
	print(poteguj3(x, k))
	return 0


main()
