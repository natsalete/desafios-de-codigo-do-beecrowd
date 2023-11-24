#include <stdio.h>

int main() {
    int l = 1, r = 1 , soma;
    while ((l > 0) && (r > 0)){
        scanf("%d %d", &l, &r);
        soma = l + r;
        if (l > 0 && r > 0){
          printf("%d\n", soma);
        }
    }

    return 0;
}
