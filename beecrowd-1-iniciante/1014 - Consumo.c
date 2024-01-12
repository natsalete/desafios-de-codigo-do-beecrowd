#include <stdio.h>
#include <stdlib.h>
//C++20
int main() {
    int X;
    double Y, consumo;
    scanf("%d %lf", &X, &Y);
    
    consumo = X / Y;
 
    printf("%.3lf km/l\n", consumo);

 
    return 0;
}