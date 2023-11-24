#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if((a > b) && (b >= 3 && b <= 96)){
        printf("minguante\n");
    }else if (b >= 0 && b <= 2){
        printf("nova\n");
    }else if(b >= 2 && b <= 96){
        printf("crescente\n");
    }else if(b >= 97 && b <= 100){
        printf("cheia\n");
    }

    return 0;
}
