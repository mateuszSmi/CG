/*
 * hanoi.cpp
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_KRAZKI = 100;

class Palik {
	public:
		Palik();
		void inicjalizuj(int liczbaKrazkow, const string &nazwa);
		int najwyzszyKrazek() const {return krazki[liczbaKrazkow - 1];}
		int zdejmKrazek();
		void polozKrazek(int krazek);
		bool jestPusty() const {return krazki[liczbaKrazkow == 0];}
		bool moznaPolozyc();
		const string &nazwa() const {return nazwaPalika;}
		void wypiszKrazki() const;
		
	private:
		int krazki[MAX_KRAZKI];
		int liczbaKrazkow;
		string nazwaPalika;
};

Palik::Palik()
	:liczbaKrazkow(0)
{
}

void Palik::inicjalizuj(int lKrazkow, const string &nazwa){
	for(int i = 0; i<lKrazkow; i++)
		krazki[i] = lKrazkow - i;
		liczbaKrazkow = lKrazkow;
		nazwaPalika = nazwa;
}

int Palik::zdejmijKrazek()
{
	--liczbaKrazkow;
	return krazki[liczbaKrazkow];
}

void Palik::polozKrazek(int krazek)
{
	krazki[liczbaKrazkow] = krazek;
	++liczbaKrazkow;
}

bool Palik::moznaPolozyc(int krazek)
{
	return jestPusty() || krazek < najwyzszyKrazek();
}

void Palik::wypiszKrazki() const
{
	cout << "Krazki palika " << nazwaPalika << ": " << endl;
	for(int i = 0; i < liczbaKrazkow; ++i)
		cout << setw(3) << krazki[i] << endl;
}

const int LICZBA_PALIKOW = 3;
Palik *palikA, *palikB, *palikC;
Palik paliki[LICZBA_PALIKOW];
int lPrzelozen;

int main(int argc, char **argv)
{
	char nazwa[10]
	return 0;
}

