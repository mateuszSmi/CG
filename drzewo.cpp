/*
 * drzewo.cpp
 */


#include <iostream>

using namespace std;

struct Wezel {
    int liczba;
    Wezel *lewy;
    Wezel *prawy;
} * korzen = NULL;

Wezel* stworzWezel(int wartosc){
    Wezel *nowy = NULL;
    try {
        Wezel *nowy = new Wezel;
    } catch(bad_alloc){
        return NULL;
    }
    nowy->liczba = wartosc;
    nowy->lewy = NULL;
    nowy->prawy = NULL;

    return nowy;
}

void dodajWezel(Wezel *wezel, int wartosc){
    if (korzen == NULL) {
        korzen = stworzWezel(wartosc);
    } else{
		if (wartosc < wezel->wartosc){ //wsatawiamy warosc po lewwej stronie
			if (wezel->lewy != NULL){
				dodajWezel(wezel->lewy, wartosc);
				
			}
		}
	}
}

int main()
{
    dodajWezel(korzen, 10);
    cout<<korzen->liczba<<endl;
    return 0;
}

