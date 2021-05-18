/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x = 11;
	cout << " Wartość x: "<<x<<endl;
	cout << "Adres x: "<< &x <<endl;
	cout << "Wartość pod adresem x: "<< * &x <<endl;
	cout << "Rozmiar x:" <<sizeof(x)<<endl;
	
	int *px; //delkaracja wskaźnika
	px = &x; //inicjacja wskaźnika inta
	cout<<"Wartość wskaźnika: " << px<<endl;
	cout<< "Wartość pamięci wskazywanej przez wskaźnik: "<< *px<<endl;
	
	*px = 4;
	cout<<x<<endl;
	
	int y = 10;
	px = &y;
	cout << *px <<endl;
	
	int *py;
	py = px;
	cout << *py << " "<< *px<<endl;
	px = &x;
	*py = *px;
	cout<< *py <<endl;
	
	return 0;
}

