#include <stdio.h>

int main() {
    int n, cont = 0;
    double med,soma = 0;
    while(n >= 0){
        scanf("%d", &n);
         if (n >= 0){
         cont += 1;
         soma += n;
         }
    }
  med = soma/cont;
  printf("%.2lf\n", med);

    return 0;
}
