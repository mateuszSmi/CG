/*
 * x_2dec.cpp
 */


#include <iostream>
using namespace std;

unsigned short C2V(char c){
	int v = 0;
	v=(int)c;
	return v;
	}

int main(int argc, char **argv)
{
	char c;
	cout << "Podaj znak: ";
	cin >> c;
	cout << "Twój znak jako liczba to: " << C2V(c) ;
	
	return 0;
}

