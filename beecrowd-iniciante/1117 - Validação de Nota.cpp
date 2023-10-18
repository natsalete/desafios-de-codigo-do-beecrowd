#include <stdio.h>


int main() {
    int cont;
    double n, soma, med;
    while (cont < 2){
    scanf("%lf", &n);
    if(n >= 0 && n <= 10){
        soma += n;
        cont += 1;
    }else {
        printf("nota invalida\n");
    }
    }
    med = soma/2;
    printf("media = %.2lf\n", med);


    return 0;
}
