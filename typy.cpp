#include <iostream>
#include <fstream> 

using namespace std;

//difinicja NAZWA wartość- pewna stała ma stałą wartość
#define ROZMIAR 20

//enum zwraca 
enum REZULTAT 
{
	ISTNIEJE = 1,
	NIEISTNIEJE = -1
};
//const-słuzy określeniu, że zmeinna za modyfikatorem nie może zostać zmieniona
//const - zasbezpiecza zmienna przed modyfikacja
REZULTAT czyjest(const char * npliku)
{
	ifstream f(npliku);
	if (f.good())
	{
		f.close();
		return ISTNIEJE;
	}
	else
	{
		f.close();
		return NIEISTNIEJE;
	}
}

void typwylicz()
{
	//użycie typu stałej ROZMIAR i typu wylicznieowego
	char plik[ROZMIAR];
	cout<<plik<<endl;
	cout<< "Podaj nazwe pliku: ";
	cin.getline(plik, ROZMIAR);
	cout<< "Nazwa: "<<plik<<endl;
	
	REZULTAT jestplik;
	jestplik = czyjest(plik);
	if (jestplik == ISTNIEJE)
		cout<<"Jest plik!";
	else
		cout<<"Nie ma pliku!";
}

void nowytyp()
{
	//
	// uużwycie typedef		str jako alias
	typedef string str;
	str x;
	cout<< "Podaj tekst: ";
	cin>> ws >> x;
	cout<<x<<endl;
}

int main(int argc, char **argv)
{
	//nowytyp();
	typwylicz();
	return 0;
}

