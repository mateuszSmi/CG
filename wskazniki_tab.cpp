/*
 * wskazniki.cpp
 * 
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int tab1W(){
		float *tab = NULL;
		int roz;
		cout<< "Ile podasz liczb? "<<endl;
		cin>>roz;
		
		try {
			tab = new float[roz];
		} catch(bad_alloc) {
			cout<< "za mało pamięci!";
			return 1;
		}
		tab[0] = 5;
		tab[2] = 6;
		cout<< *(tab) <<" "<< *(tab+2)<<endl;
		//wprowadz(tab, roz);
}

int main(int argc, char **argv)
{
	//int roz = 10;
	//int tab[roz];
	tab1W();
	
	
	return 0;
}

