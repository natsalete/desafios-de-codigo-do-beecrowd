#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N, M, F;
    scanf("%d", &N);
    scanf("%d", &M);
    if((N >= 1 && N <= 40) && (M >= 1 && M <= 40)){
       F = N - M;
       printf("%d\n", F);
    }
    
    return 0;
}