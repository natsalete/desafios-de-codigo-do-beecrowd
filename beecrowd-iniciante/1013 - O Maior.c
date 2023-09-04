#include <stdio.h>
#include <math.h>

int main() {
    
    int A, B, C, X, maiorAB, maiorXC;
    scanf("%d %d %d", &A, &B, &C);
    maiorAB = (A + B + abs(A - B))/2;
    if(maiorAB == A){
        X = A;
    }else {
        X = B;
    }
    maiorXC = (X + C + abs(X - C))/2;
    if(maiorXC == X){
        printf("%d eh o maior\n", X);
    }else {
        printf("%d eh o maior\n", C);
    }
    
    return 0;
}