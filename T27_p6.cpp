/*
 * program.cpp
 */


#include <iostream>
#include <stdlib.h>

using namespace std;

// struktura przechowujaca wezel drzewa
struct SWezel 
{
    int dana;
    SWezel *lewySyn;
    SWezel *prawySyn;
} *korzen = NULL; // tworzymy korzen drzewa

// funkcja tworzaca zmienna typu SWezel
SWezel* stworzNowyWezel(int liczba) 
{
    SWezel* nowyWezel = new SWezel;
    nowyWezel->lewySyn = NULL;
    nowyWezel->prawySyn = NULL;
    nowyWezel->dana = liczba;
    
    return nowyWezel;
}

// funkcja dodajaca nowy element do drzewa, korzystajaca z rekurencji
void dodajWezel(SWezel *wezelPoczatkowy, int liczba)
{
    if(korzen == NULL) // gdy drzewo jest puste, korzen jest zmienna globalna przechowujaca korzen tworzonego drzewa
    {
        korzen = stworzNowyWezel(liczba); // tworzenie pierwszego wezla w drzewie 
    }
    else // jezeli drzewo niepuste
    {
        // jezeli nowa liczba mniejsza od wartosci w wezle dodaj do lewego podrzewa
        if(liczba < wezelPoczatkowy->dana) 
        {
            // jezeli lewy syn nie jest pusty wywolaj rekurenyjnie dodawanie do lewego podrzewa
            if(wezelPoczatkowy->lewySyn != NULL)   
            {
                dodajWezel(wezelPoczatkowy->lewySyn, liczba);
            } 
            // jezeli lewe podrzewo nie istnieje, to niech lewy syn wskazuje na nowo utworzony wezel z nowa wartoscia
            else 
            {
                wezelPoczatkowy->lewySyn = stworzNowyWezel(liczba);
            }
        }
        // jezeli nowa liczba rowna lub wieksza od wartosci w wezle dodaj do prawego podrzewa
        else 
        {
            // jezeli prawy syn nie jest pusty wywolaj rekurenyjnie dodawanie do prawego podrzewa
            if(wezelPoczatkowy->prawySyn != NULL) 
            {
                dodajWezel(wezelPoczatkowy->prawySyn, liczba);
            } 
            // jezeli prawe podrzewo nie istnieje, to niech prawy syn wskazuje na nowo utworzony wezel z nowa wartoscia
            else 
            {
                wezelPoczatkowy->prawySyn = stworzNowyWezel(liczba);
            }
        }
    }
}   

// funkca rekurencyjnie przegladajaca drzewo
void wypiszDrzewoNiemalejaco(SWezel *wezelPoczatkowy) 
{
     // jezeli wezel nie jest pusty
     if(wezelPoczatkowy != NULL) 
     {
         // rekurencyjnie wypisz lewe poddrzewo
         wypiszDrzewoNiemalejaco(wezelPoczatkowy->lewySyn);
         // wypisz wartosc aktualnego wezla
         cout << wezelPoczatkowy->dana << ", ";
         // rekurencyjnie wypisz prawe poddrzewo
         wypiszDrzewoNiemalejaco(wezelPoczatkowy->prawySyn);
     }
}


void wypiszDrzewoNierosnaco(SWezel *wezelPoczatkowy) 
{
     // jezeli wezel nie jest pusty
     if(wezelPoczatkowy != NULL) 
     {
         // rekurencyjnie wypisz lewe poddrzewo
         wypiszDrzewoNierosnaco(wezelPoczatkowy->prawySyn);
         // wypisz wartosc aktualnego wezla
         cout << wezelPoczatkowy->dana << ", ";
         // rekurencyjnie wypisz prawe poddrzewo
         wypiszDrzewoNierosnaco(wezelPoczatkowy->lewySyn);
     }
}

int main()
{
    cout << "Wygenerowane losowe liczby: ";
    
    // wygeneruj 10 losowych liczb
    for (int i = 0; i < 10; i++) 
    {
        int liczba = rand() % 100 + 1; // liczby z przedzialu <1, 100>
        cout << liczba << ", ";
        dodajWezel(korzen, liczba); // dodawaj wygenerowane liczby do drzewa
    }
    
    cout<<"\n\nPosortowane elemnty z drzewa: ";
    
    wypiszDrzewoNiemalejaco(korzen); // wypisz elemnety drzewa w osortowanej kolejnosci
    
    
    cout<<endl;
    cout<<"\n\nPosortowane elemnty z drzewa nierosnaco: ";
    
    wypiszDrzewoNierosnaco(korzen); // wypisz elemnety drzewa w osortowanej kolejnosci
    
    delete korzen;
    
    cout << endl << "\n\nNacisnij ENTER, aby kontynuowac...";
    cin.get();
    
    return 0;
}

