#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1, j, z, cont = 1, somaj, somaz , dif, i;

   do{
        scanf("%d", &n);
        somaj = 0;
        somaz = 0;
        dif = 0;

        if(n != 0){
            printf("Teste %d\n", cont++);
        }


        for(i = 0; i < n; i++){
            scanf("%d %d", &j, &z);
            somaj += j;
            somaz += z;
            dif = somaj - somaz;
            printf("%d\n", dif);
        }
        if(n != 0){
        printf("\n");
        }
    }while(n >= 1);

    // ta quebrando mais linha do que precisava

    return 0;
}
