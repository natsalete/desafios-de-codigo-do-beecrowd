#include<stdio.h>
#define N 9

int main() {
    int n, t;
    scanf("%d", &n);

    for (t = 1; t <= n; t++) {

        int m[N][N];

        int i, j, x, y, valido = 1;

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            int pos[N + 1];
            for (j = 0; j <= N; j++) {
                pos[j] = 0;
            }
            for (j = 0; j < N; j++) {
                int x = m[i][j];
                //printf("%d\n", x);
                pos[x]++;
                //printf("%d\n", pos[x]);
            }
            for (j = 1; j <= N; j++) {
                //printf("%d %d\n", j, pos[j]);
                if (pos[j] != 1) {
                    valido = 0;
                    //printf("Linha %d %d\n", i, pos[j]);
                }
            }
        }

        for (i = 0; i < N; i++) {
            int pos[N + 1];
            for (j = 0; j <= N; j++) {
                pos[j] = 0;
            }
            for (j = 0; j < N; j++) {
                int x = m[j][i];
                pos[x]++;
            }
            for (j = 1; j <= N; j++) {
                if (pos[j] != 1) {
                    valido = 0;
                    //printf("Coluna %d\n", i);
                }
            }
        }

        for (x = 0; x < N; x += 3) {
            for (y = 0; y < N; y += 3) {
                int pos[N + 1];
                for (j = 0; j <= N; j++) {
                    pos[j] = 0;
                }
                for (i = x; i <= x + 2; i++) {
                    for (j = y; j <= y + 2; j++) {
                        int z = m[i][j];
                        pos[z]++;
                        //printf("Bloco %d %d\n", x, y);
                    }
                }
                for (j = 1; j <= N; j++) {
                    if (pos[j] != 1) {
                        valido = 0;
                    }
                }
            }
        }

        printf("Instancia %d\n", t);
        if (valido == 1) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");

    }
    return 0;
}
