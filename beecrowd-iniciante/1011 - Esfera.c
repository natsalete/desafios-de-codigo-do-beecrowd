#include <stdio.h>
#include <math.h>
//C++20
int main() {
    
    double R, VOLUME, pi;
    scanf("%lf", &R);
    pi =3.14159;
    VOLUME = (4.0/3) * pi * (pow (R,3));
    printf("VOLUME = %.3lf\n", VOLUME);
 
    return 0;
}