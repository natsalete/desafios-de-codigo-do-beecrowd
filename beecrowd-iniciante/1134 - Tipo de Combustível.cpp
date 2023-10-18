#include <stdio.h>

int main() {
    int opcao,alcool = 0, gasolina = 0, diesel = 0;
    do{
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
            alcool += 1;
            break;
            case 2:
            gasolina += 1;
            break;
            case 3:
            diesel += 1;
            break;
        }
    }while (opcao != 4);
   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool, gasolina, diesel);



    return 0;
}
