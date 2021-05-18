/*
 * figury2.cpp
 */


#include <iostream>

using namespace std;

#define PI 3.1416

class CFigura
{
 private:
	float x,y;		// Ogólna pozycja obiektu; floaterpretacja zalezy od spadkobiercy 
	
 public:
	CFigura(float xp, float yp);
	void Przesun(float xn, float yn);
	void PrzesunDelta(float dx, float dy);
	void WypiszPozycje();
	virtual string PodajNazwe();
	virtual float Pole();
	virtual float Obwod();
};
		
class CProstokat : public CFigura
{
 private:
	float w,h;		// Szerokosc i wysokosc
	
 public:
	CProstokat(float xp, float yp, float wp, float hp);
	virtual string PodajNazwe();
	virtual float Pole();
	virtual float Obwod();
};
	
class COkrag : public CFigura 
{
 private:
	float r;			// Promieñ 
	
 public:
	COkrag(float xp, float yp, float rp);
	virtual string PodajNazwe();
	virtual float Pole();
	virtual float Obwod();
};


/*
 *	Metody klasy CFigura
 */

// Konstruktor 
CFigura::CFigura(float xp, float yp)
{
	x = xp;
	y = yp;
}

// Wypisuje pozycje 
void CFigura::WypiszPozycje()
{
	cout<<"Pozycja "<<PodajNazwe()<<" to: ("<<x<<","<<y<<")"<<endl;
}

// Przesuwa obiekt na pozycjê (x,y)  
void CFigura::Przesun(float xn, float yn)
{
	x = xn;
	y = yn;
}

// Przesuwa obiekt o dx w poziomie i dy w pionie 
void CFigura::PrzesunDelta(float dx, float dy)
{
	x = x+dx;
	y = y+dy;
}

// Zwraca nazwe figury
string CFigura::PodajNazwe()
{
	return "figury";
}

// Zwraca pole figury
float CFigura::Pole()
{
	return 0;
}

// Zwraca obwod figury
float CFigura::Obwod()
{
	return 0;
}

/*
 *	Metody klasy TProstokat
 */

// Konstruktor prostokata, wywoluje konstruktor klasy bazowej
CProstokat::CProstokat(float xp, float yp, float wp, float hp) : CFigura(xp, yp)
{
	w = wp;
	h = hp;
}

// Zwraca nazwe figury
string CProstokat::PodajNazwe()
{
	return "prostokata";
}

// Zwraca pole figury
float CProstokat::Pole()
{
	return w * h;
}

// Zwraca obwod figury
float CProstokat::Obwod()
{
	return 2*w + 2*h;
}


/*
 *	Metody klasy COkrag
 */

// Konstruktor okregu, wywoluje konstruktor klasy bazowej
COkrag::COkrag(float xp, float yp, float rp) : CFigura(xp,yp)
{
	r = rp;
}

// Zwraca nazwe figury
string COkrag::PodajNazwe()
{
	return "okregu";
}

// Zwraca pole figury
float COkrag::Pole()
{
	return (float)(PI * r * r);
}

// Zwraca obwod figury
float COkrag::Obwod()
{
	return (float)(2 * PI * r);
}

// obiekty
CProstokat Prostokat(5, 10, 15, 20);
COkrag Okrag(10, 10, 20);

int main() 
{
	Prostokat.WypiszPozycje();		// wywolanie odziedziczonej metody 
	
	cout << endl;

	Okrag.WypiszPozycje();
	
	cout << endl << "Nowa pozycja prostokata:" << endl;
	Prostokat.Przesun(100,100);
	
	Prostokat.PrzesunDelta(10,10);  // wywolanie odziedziczonej metody 
	Prostokat.WypiszPozycje();		// wywolanie odziedziczonej metody 
	
	cout << endl <<"Nowa pozycja okregu:" << endl;
	Okrag.PrzesunDelta(10,10);		// wywolanie odziedziczonej metody 
	Okrag.WypiszPozycje();			// wywolanie odziedziczonej metody 
	
	cout << endl <<"Pole prostokata: " <<Prostokat.Pole() << endl; // wywolanie nadpisanej metody 
    cout << "Obwod prostokata: " << Prostokat.Obwod() << endl;     // wywolanie nadpisanej metody 
	
	cout << endl << "Pole okregu: " << Okrag.Pole()<<endl;		 // wywolanie nadpisanej metody 
    cout << "Obwod okregu: " << Okrag.Obwod()<<endl;			 // wywolanie nadpisanej metody 
	
	// przypisanie wskaznikowi typu bazowego obiektu typu podrzednego
	CFigura* FiguraWsk1 = &Prostokat; 
	
	// polimorficzne wywolanie - wskaznik do typu CFigura, a wykonywany jest kod z CProstokat, czyli wskazywanego obiektu 
	cout << endl << "Polimorficzne wywolanie pola dla prostokata, pole = " << FiguraWsk1->Pole() << endl; 
	
	// przypisanie wskaznikowi typu bazowego obiektu typu podrzednego 
	CFigura* FiguraWsk2 = &Okrag;
	
	// polimorficzne wywolanie - wskaznik do typu CFigura, a wykonywany jest kod z COkrag, czyli wskazywanego obiektu 
	cout << endl << "Polimorficzne wywolanie pola dla okregu, pole = " << FiguraWsk2->Pole() << endl;

	cout << endl << "Nacisnij klawisz ENTER by zakonczyc...";
	cin.get();

    return 1;
}

