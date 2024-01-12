#include <stdio.h>

int main() {
    int n, conta, contb, a, b, i;
    do{
     scanf("%d", &n);
     conta = 0;
     contb = 0;
     if (n > 0){
     for (i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        if(a > b){
            conta += 1;
        }else if(b > a){
            contb += 1;
        }
     }
     printf("%d %d\n", conta, contb);
     }
    }while(n > 0);

    return 0;
}
