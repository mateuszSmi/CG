/*
 * x_2dec.cpp
 */


#include <iostream>
using namespace std;

void wstaw(char bi[],int p){
     for(int i = 0; i < p ; i++){
        cout << "Podaj znak: ";
        cin >> bi[i];
    }}

int X2D(char bi[], int p){
	int v = 0; 
	for(int i = 0; i < p; i++){
		v += (int)bi[i];
	}
	return v;
	}
	


int main(int argc, char **argv)
{
	int p=0;
	cout << "Podaj długość tablicy: ";
	cin >> p;
	char bi[p];
	wstaw(bi, p);
	cout << "Twoje znaki jako liczba to: " << X2D(bi, p) ;
	
	
	
	return 0;
}

