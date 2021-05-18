/*
 * sort_insert.cpp
 */


#include <iostream>

using namespace std;


void sort_insert(int tb[], int n) 
{ 
	int i, x, j; 
	for (i = 1; i < n; i++)
	{ 
		x = tb[i]; 
		j = i - 1; 
		while (j >= 0 && tb[j] > x)
		{ 
			tb[j + 1] = tb[j]; 
			j = j - 1; 
		} 
		tb[j + 1] = x; 
	} 
} 
 
void wypisz(int tb[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << tb[i] << " "; 
	cout << endl;
} 

int main(int argc, char **argv)
{
	int tb[] = { 7, 3, 5, 2, 1, 8 ,4, 6}; 
	int n = sizeof(tb) / sizeof(tb[0]); 
 
	sort_insert(tb, n); 
	wypisz(tb, n);
	
	return 0;
}

