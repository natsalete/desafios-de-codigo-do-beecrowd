#include <stdio.h>
#include <math.h>

int main() {
    int idade, ano, mes, dia, aux;
    scanf("%d", &idade);
    ano = idade / 365;
    aux = idade % 365;
    mes = aux / 30;
    dia = aux % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    
 
    return 0;
}