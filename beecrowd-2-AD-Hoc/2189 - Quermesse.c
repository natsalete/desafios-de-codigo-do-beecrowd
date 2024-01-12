#include <stdio.h>

int main() {
    int n, i, cont = 0, ganhador, pos;
    do{
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
       scanf("%d", &pos);
       if( pos == i){
           ganhador = pos;
       }
    }
    if(n != 0){
    cont += 1;
    printf("Teste %d\n%d\n\n",cont, ganhador);
    }
    }while(n > 0);



    return 0;
}
