#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, A, B, C, D, E, cont;

    scanf("%d" , &T);

    if (T >= 1 && T <= 4){
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    }

    if((A >= 1 && A <= 4) && (B >= 1 && B <= 4) && (C >= 1 && C <= 4) && (D >= 1 && D <= 4) && (E >= 1 && E <= 4)){
        cont = 0;
        if(A == T){
            cont = cont + 1;
        }
        if(B == T){
            cont = cont + 1;
        }
        if(C == T){
            cont = cont + 1;
        }
        if(D == T){
            cont = cont + 1;
        }
        if(E == T){
            cont = cont + 1;
        }
        printf("%d\n", cont);
    }

    return 0;
}
