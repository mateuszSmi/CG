#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

float liczba;

int main(int argc, char **argv)
{
    srand(time(NULL)); 

        for(int i=0;i<10;i++){
			
		
        liczba = rand()%10+95;
			 cout<<liczba<<endl;
			 
			 
			 }
	
	return 0;
}
