#include <stdio.h>
//C99
int main() {
    char nome[10];
    double a, b, total = 0;
    gets(nome);
    scanf("%lf %lf", &a, &b);

    total =(b * 0.15) + a;

    printf("TOTAL = R$ %.2lf\n", total);


    return 0;
}