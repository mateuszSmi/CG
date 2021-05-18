/*
 * struktury.cpp
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct osoba {
	char imie[20];
	char nazwisko[20];
	int wiek; 
};

void getOsoby(osoba tb[], int ile){
	for(int i =0 ; i<ile; i++){
		cout<< "Podaj dane "<< i+1 << " ucznia: "<<endl;
		cout<< setw(10) <<left << "Imię: ";
		cin>>tb[i].imie;
		cout<< setw(10) <<left << "Nazwisko: ";
		cin>>tb[i].nazwisko;
		cout<< setw(10) <<left << "Wiek: ";
		cin>>tb[i].wiek;
		}
}

void drukuj(osoba tb[], int ile){
	for(int i =0 ; i<ile; i++){
		cout<< tb[i].imie << " " <<tb[i].nazwisko << " "<<tb[i].wiek<<endl;
	}
}

void zapisz(osoba tb[], int ile){
	ofstream f("osoby.txt", ios::app);
	if (!f.is_open()){
		cout<< "Błąd otwarcia pliku! "<<endl;
	}
	else {
		for(int i =0 ; i<ile; i++){
		f << tb[i].imie << " " <<tb[i].nazwisko
		 << " "<<tb[i].wiek<<endl;
		}
	}
}
void czytaj(osoba tb[]){
    string linia;
    ifstream f("osoby.txt");
    if(f.is_open()){
        while(getline(f, linia)){
            cout<<linia<<endl;
        }
    }
}

int main(int argc, char **argv)
{
	int ile = 2;
	osoba tb[ile];
	getOsoby(tb, ile);
	drukuj(tb, ile);
	zapisz(tb, ile);
	cout << endl;
	czytaj(tb);
	return 0;
}

