#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[N][N];
    int somaLinha[N], somaColuna[N];
    for (int i = 0; i < N; i++) {
        somaLinha[i] = 0;
        somaColuna[i] = 0;
    }

    // Ler a matriz e calcular as somas das linhas e colunas
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
    }

    // Determinar a soma correta das linhas e colunas
    int somaCorreta;
    if (somaLinha[0] == somaLinha[1] || somaLinha[0] == somaLinha[2]) {
        somaCorreta = somaLinha[0];
    } else {
        somaCorreta = somaLinha[1];
    }

    // Encontrar a linha e coluna com a soma errada
    int linhaErrada = -1, colunaErrada = -1;
    for (int i = 0; i < N; i++) {
        if (somaLinha[i] != somaCorreta) {
            linhaErrada = i;
            break;
        }
    }

    for (int j = 0; j < N; j++) {
        if (somaColuna[j] != somaCorreta) {
            colunaErrada = j;
            break;
        }
    }

    // Calcular o número original e o número alterado
    int somaErrada = somaLinha[linhaErrada];
    int numeroAlterado = matriz[linhaErrada][colunaErrada];
    int numeroOriginal = numeroAlterado + (somaCorreta - somaErrada);

    printf("%d %d\n", numeroOriginal, numeroAlterado);

    return 0;
}
