ciag_a = [1, 3, 4, 6, 9, 10, 12]
ciag_b = [2, 4, 5, 7, 8, 12, 13, 14]
ciag_ab = []

def scal():
	ile1 = len(ciag_a)
	ile2 = len(ciag_b)
	i1 = 0
	i2 = 0
	while i1 < ile1:
		if i1 < ile1 and i2 < ile2:
			if ciag_a[i1] < ciag_b[i2]:
				ciag_ab.append(ciag_a[i1])
				i1 += 1
			elif ciag_b[i2] < ciag_a[i1]:
				ciag_ab.append(ciag_b[i2])
				i2 += 1
			else:
				ciag_ab.append(ciag_a[i1])
				ciag_ab.append(ciag_b[i2])
				i1 +=1
				i2 +=1
	if ile1>ile2:
		while i1 < ile1:
			ciag_ab.append(ciag_a[i1])
			i1 += 1
	else:
		while i2 < ile2:
			ciag_ab.append(ciag_b[i2])
			i2 += 1
			
	print(ciag_ab)
	
	
	
scal()
