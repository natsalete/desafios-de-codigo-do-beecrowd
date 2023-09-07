#include <stdio.h>
 
int main() {
    int cod = 0, quant= 0;
    double total = 0;
    scanf("%d %d", &cod, &quant);
    if(cod == 1){
        total = quant * 4.0;
        printf("Total: R$ %.2lf\n", total);
    }else if(cod == 2){
        total = quant * 4.5;
        printf("Total: R$ %.2lf\n", total);
    }else if(cod == 3){
        total = quant * 5.0;
        printf("Total: R$ %.2lf\n", total);
    }else if(cod == 4){
        total = quant * 2.0;
        printf("Total: R$ %.2lf\n", total);
    }else if(cod == 5){
        total = quant * 1.5;
        printf("Total: R$ %.2lf\n", total);
    }
 
    return 0;
}