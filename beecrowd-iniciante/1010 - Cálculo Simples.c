#include <stdio.h>
#include <stdlib.h> 
//C++20
int main() {
    int cod1, cod2, n1, n2;
    double valor1, valor2, total;
    
    scanf("%d %d %lf", &cod1, &n1, &valor1);
    scanf("%d %d %lf", &cod2, &n2, &valor2);
    
    total = (n1 * valor1) + (n2* valor2);
 
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}