#include <stdio.h>
#include <math.h>
//C++20
int main() {
    double A, B, C, pi, triangulo, circulo,trapezio, quadrado, retangulo;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    triangulo = (A * C) / 2;
    pi = pi = 3.14159;
    circulo = pi * pow(C,2);
    trapezio = ((A + B) * C)/ 2;
    quadrado = pow(B,2);
    retangulo = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n", triangulo, circulo, trapezio);
    printf("QUADRADO: %.3lf\nRETANGULO: %.3lf\n", quadrado, retangulo);
    
    return 0;
}