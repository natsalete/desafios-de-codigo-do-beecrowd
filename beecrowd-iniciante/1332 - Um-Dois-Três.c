#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char palavra[10];
        scanf("%s", palavra);

        int tamanho = strlen(palavra);

        if (tamanho == 5) {
            printf("3\n");
        } else {
            int cont = 0;
            if (palavra[0] != 'o') {
                cont++;
            }
            if (palavra[1] != 'n') {
                cont++;
            }
            if (palavra[2] != 'e') {
                cont++;
            }

            if (cont <= 1) {
                printf("1\n");
            } else {
                cont = 0;

                if (palavra[0] != 't') {
                    cont++;
                }
                if (palavra[1] != 'w') {
                    cont++;
                }
                if (palavra[2] != 'o') {
                    cont++;
                }

                if (cont <= 1) {
                    printf("2\n");
                } else {
                    printf("3\n");
                }
            }
        }
    }

    return 0;
}
