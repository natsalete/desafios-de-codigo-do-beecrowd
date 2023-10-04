#include <stdio.h>
#include <stdlib.h> 

int main() {

    double A, B, C, Perimetro, Area;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A){
       Perimetro = A + B + C;
       printf("Perimetro = %.1lf\n", Perimetro);
    }else{
       Area = ((A + B) * C) / 2;
       printf("Area = %.1lf\n", Area);
    }
    return 0;
}