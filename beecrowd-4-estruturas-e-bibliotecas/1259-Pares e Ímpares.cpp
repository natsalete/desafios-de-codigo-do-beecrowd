#include <iostream>

const int MAX_N = 100000;

void troca(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pivo = arr[alto];
        int i = baixo - 1;

        for (int j = baixo; j <= alto - 1; j++) {
            if (arr[j] <= pivo) {
                i++;
                troca(arr[i], arr[j]);
            }
        }
        troca(arr[i + 1], arr[alto]);

        int particao = i + 1;

        quickSort(arr, baixo, particao - 1);
        quickSort(arr, particao + 1, alto);
    }
}

int main() {
    int N;
    std::cin >> N;

    int pares[MAX_N], impares[MAX_N];
    int numPares = 0, numImpares = 0;

    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        if (num % 2 == 0) {
            pares[numPares++] = num;
        } else {
            impares[numImpares++] = num;
        }
    }

    quickSort(pares, 0, numPares - 1);
    quickSort(impares, 0, numImpares - 1);

    for (int i = 0; i < numPares; i++) {
        std::cout << pares[i] << std::endl;
    }

    for (int i = numImpares - 1; i >= 0; i--) {
        std::cout << impares[i] << std::endl;
    }

    return 0;
}
