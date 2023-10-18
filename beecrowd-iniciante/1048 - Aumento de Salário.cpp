#include <stdio.h>
#include <stdlib.h>

int main() {

    double salinc, salfim, reajuste;
    scanf("%lf", &salinc);

    if (salinc > 0 && salinc <= 400.00){
        salfim = salinc * 1.15;
        reajuste = salfim - salinc;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salfim, reajuste, 15);
    }else if (salinc > 400.00 && salinc <= 800.00){
        salfim = salinc * 1.12;
        reajuste = salfim - salinc;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salfim, reajuste, 12);
    }else if (salinc > 800.00 && salinc <= 1200.00){
        salfim = salinc * 1.10;
        reajuste = salfim - salinc;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salfim, reajuste, 10);
    }else if (salinc > 1200.00 && salinc <= 2000.00){
        salfim = salinc * 1.07;
        reajuste = salfim - salinc;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salfim, reajuste, 7);
    }else if (salinc > 2000.00){
        salfim = salinc * 1.04;
        reajuste = salfim - salinc;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salfim, reajuste, 4);
    }

    return 0;
}
