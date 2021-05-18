#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

float liczba;
float a;
float zmienna;

int main(int argc, char **argv)
{
	cout<<"Zadanie 1:"<<endl;
    srand(time(NULL)); 
    
		for(int i=0;i<10;i++){		
        zmienna = rand()%10+95;
			 printf("%10.0f\n", zmienna);
			 }
	cout<<"Zadanie 2:"<<endl;
        for(int i=0;i<10;i++){
		a= liczba = rand()%10+95;
        liczba = ((float) rand()) / (float) RAND_MAX;
			 printf("%10.3f\n", liczba+a);
			 }
	
	return 0;
}
