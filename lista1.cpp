/*
 * lista1.cpp
 */


#include <iostream>

using namespace std; 

struct elem_listy{
	int liczba;
	elem_listy *nast;
};

int main(int argc, char **argv)
{
	elem_listy *glowa = NULL; 
	elem_listy *nowy;
	char odp;
	int dane;
	cout<< "Czy dodasz element do listy? (t/n)";
	cin >> odp;
	while (odp != 'n'){
		cout<< "Podaj liczbę: ";
		cin >> dane; 
		
		try {
			nowy = new elem_listy[3];
		} catch (bad_alloc){
			break;
		}
		
		nowy->nast = glowa;
		nowy->liczba = dane;
		
		glowa = nowy;
		
		
		cout<< "Czy dodasz element do listy? (t/n)";
		cin >> odp;
	}
	elem_listy *tmp = glowa;
	cout << "Oto lista: "<<endl; 
	while (tmp != NULL){
		cout<<tmp->liczba << " ";
		tmp = tmp->nast;
	}
	//int *pa; //opinter-wskaźnik
	return 0;
}

