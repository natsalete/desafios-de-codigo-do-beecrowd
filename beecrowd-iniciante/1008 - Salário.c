#include <stdio.h>
#include <stdlib.h>
//C++20
int main() {
    
    int n, h;
    double valor;
    
    scanf("%d %d %lf", &n, &h, &valor);
    
    valor = h * valor;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, valor);
 
    return 0;
}