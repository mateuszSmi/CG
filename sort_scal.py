d = [6, 5, 3, 1, 8, 7, 2, 4, 9]
n = len(d)
p = [''] * n

def MergeSort(i_p, i_k):
	i_s = (i_p + i_k + 1) // 2
	if i_s - i_p > 0:
		MergeSort(i_p, i_s - 1)
	if i_k - i_s > 1:
		MergeSort(i_s, i_k)
		
	i1 = i_p
	i2 = i_s
	
	for i in range(i_p, i_k + 1):



def main():
	print(d)
	i_p = 0
	i_k = n - 1
	MergeSort(i_p, i_k)
	print(d)
	return 0
	
	
main()
