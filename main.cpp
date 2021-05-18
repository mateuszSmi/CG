#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int li = 100;
    float lf = 12.12345678;
    
    printf("%e\n", M_PI);
    printf("%10.4f\n", M_PI);
    printf("%10.4f\n", lf);
    printf("Hex: %#x\nOct: %#o", li, li);
    return 0;
}
