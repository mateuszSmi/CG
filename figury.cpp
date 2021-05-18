/*
 * figury.cpp
 */


#include <iostream>
#include <cstring>

using namespace std; 


class Figura {
public:
	Figura(char figura); //konsatruktor
	void getNazwa(); //wyswietla nazwe figury
	char getTyp(); //zwraca typ figury
	//void getPole();
	//void getObwod();
	
private:
	// hermetyzacja
	char typ;
	char nazwa[15];
	float pole;
	float obwod;
	void setType(char figura);
};

Figura::Figura(char figura) {
	setType(figura);
	cout<<"Utworzono: ";
	getNazwa();
	cout<<endl;
	pole=0;
	obwod=0;
}

void Figura::setType(char figura){
	switch (figura){
		case 'k':
		strcpy(nazwa, "kwadrat"); typ = figura; break;
		case 'p':
		strcpy(nazwa, "prostokat"); typ = figura; break;
		case 't':
		strcpy(nazwa, "trojkat"); typ = figura; break;
		default:
			cout<<"Nieznany typ figury!";
			strcpy(nazwa, "kwadrat");
			typ = 'k';
	}
}

char Figura::getTyp() {
	return typ;
}
void Figura::getNazwa() {
	cout<<nazwa;
}


int main(int argc, char **argv)
{
	Figura figura1('k');
	Figura figura2('p');
	
	return 0;
}

