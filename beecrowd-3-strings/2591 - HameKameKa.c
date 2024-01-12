#include <stdio.h>
#include <string.h>
#include<ctype.h>


int main() {

    int n;

    scanf("%d", &n);

    char ataque[201];
    char * divisao1,  * divisao2;

    while(n--){

        scanf("%s", ataque);

        divisao1 = strtok (ataque,"k");
        int cont1 = 0;
        for(int i = 0; i < strlen(divisao1); i++){
            if(divisao1[i] == 'a'){
                cont1++;
            }
        }

        divisao2 = strtok (NULL, "k");
        int cont2 = 0;
        for(int i = 0; i < strlen(divisao2); i++){
            if(divisao2[i] == 'a'){
                cont2++;
            }
        }

         int cont_a = 0;

         cont_a = cont1 * cont2;
         printf("k");
         for(int i = 0; i < cont_a; i++){
            printf("a");
        }
        printf("\n");

    }
    return 0;
}
