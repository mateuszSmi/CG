/*
 * losuj.cpp
 */


#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std; 

void losuj1(int t[], int r, int a, int b) {
	//long long int = tmp = 1;
	//for (int i =0; i<100000000000; i++){
		//tmp = tmp * i;
		//if (tmp > 100000) tmp = tmp%i;
		//}
	//long int czas = time(NULL);
	//cout <<"Czas: "<<czas <<endl;
	//srand(czas);
	srand(time(NULL));
	for(int i=0; i<r; i++){
		//zakres <0,r>
		t[i] = rand() % (r+1);
		//zakres <a; b>
		t[i]= a+rand()%(b-a+1);
		}
}

void drukuj1(int t[], int r) {
	for(int i=0; i<r; i++){
		cout<< t[i] << " ";
		}
	cout<<endl;
}
void losuj3(float t[], int r){
	int a = 5;
	int b = 20;
	srand(time(NULL));
	for (int i=0; i<r; i++){
			t[i]= ((float)rand()/RAND_MAX * (b-a));
	}
}
void drukuj3(float t[], int r){
	for(int i=0; i<r; i++){
		cout<< t[i] << " ";
		}
		cout<<endl;
	}


int main(int argc, char **argv)
{
	cout << time(NULL)<<endl;
	cout<<"Ile liczb wylosowac? ";
	int ile=0;
	cin >> ile;
	int tab[ile];
	for (int i = 0; i<5;i++){
	losuj1(tab, ile, 5 , 20);
	drukuj1(tab, ile);
	}
	float tab2[ile];
	losuj3(tab2, ile);
	drukuj3(tab2, ile);
	
	return 0;
}

