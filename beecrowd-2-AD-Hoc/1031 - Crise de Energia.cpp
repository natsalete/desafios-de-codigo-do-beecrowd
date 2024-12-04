#include <iostream>
#include <vector>
using namespace std;

// Função para encontrar o menor m para um dado N
int encontrarUltimaRegiao(int N) {
    for (int m = 1; ; m++) { // Tenta todos os valores de m
        vector<bool> visitadas(N + 1, false); // Marcações de regiões visitadas
        int atual = 1; // Começa pela região 1
        visitadas[1] = true; // Marca a primeira região como desligada
        int cortadas = 1; // Conta regiões desligadas

        while (cortadas < N) {
            int passos = 0;
            // Avança m regiões ignorando as já desligadas
            while (passos < m) {
                atual++;
                if (atual > N) atual = 1; // Volta ao início se passar de N
                if (!visitadas[atual]) passos++;
            }
            visitadas[atual] = true; // Marca a região atual como visitada
            cortadas++;
        }

        // Se a última região desligada for 13, retorna o m atual
        if (atual == 13) {
            return m;
        }
    }
}

int main() {
    int N;
    while (true) {
        cin >> N;
        if (N == 0) break; // Termina ao encontrar N = 0
        cout << encontrarUltimaRegiao(N) << endl;
    }
    return 0;
}

