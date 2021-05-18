/*
 * books.cpp
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct ksiazka {
	char autor[20];
	char tytul[50];
	int rok_wydania; 
};

void getBook(ksiazka tb[], int ile){
	for(int i =0 ; i<ile; i++){
		cout<< "Podaj informacje o książce: "<<endl;
		cout<< setw(10) <<left << "Autor: ";
		cin.getline(tb[i].autor, 20);
		cout<< setw(10) <<left << "Tytuł: ";
		cin.getline( tb[i].tytul ,50);
		cout<< setw(10) <<left << "Rok wydania książki: ";
		cin>>tb[i].rok_wydania;
		}
}

void drukuj(ksiazka tb[], int ile){
	for(int i =0 ; i<ile; i++){
		cout<< tb[i].autor << " " << ",," <<tb[i].tytul<< "''" << " "<<tb[i].rok_wydania<<endl;
	}
}

void zapisz(ksiazka tb[], int ile){
	ofstream f("book.txt", ios::app);
	if (!f.is_open()){
		cout<< "Błąd otwarcia pliku! "<<endl;
	}
	else {
		for(int i =0 ; i<ile; i++){
		f << tb[i].autor << " " << ",," <<tb[i].tytul<< "''" << " "<<tb[i].rok_wydania<<endl;
		}
	}
}

void czytaj(ksiazka tb[]){
    string linia;
    ifstream f("book.txt");
    if(f.is_open()){
        while(getline(f, linia)){
            cout<<linia<<endl;
        }
    }
}

int main(int argc, char **argv)
{
	int ile = 1;
	ksiazka tb[ile];
	getBook(tb, ile);
	cout<<endl;
	drukuj(tb, ile);
	zapisz(tb, ile);
	cout<<endl;
	czytaj(tb);
	return 0;
}

