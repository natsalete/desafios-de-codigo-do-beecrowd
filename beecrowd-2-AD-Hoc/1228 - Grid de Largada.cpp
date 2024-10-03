#include <iostream>
#include <vector>

using namespace std;

const int MAX_COMPETITORS = 24;

int calcularUltrapassagens(int n, const vector<int>& largada, const vector<int>& chegada) {
    int ultrapassagens = 0;
    vector<int> posicao(MAX_COMPETITORS + 1);

    // Registra a posição inicial de cada competidor
    for (int i = 0; i < n; i++) {
        posicao[largada[i]] = i;
    }

    // Calcula as ultrapassagens
    for (int i = 0; i < n; i++) {
        int competidor = chegada[i];
        ultrapassagens += posicao[competidor] - i;

        // Atualiza as posições dos competidores ultrapassados
        for (int j = 1; j <= n; j++) {
            if (posicao[j] < posicao[competidor]) {
                posicao[j]++;
            }
        }
        posicao[competidor] = i;
    }

    return ultrapassagens;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<int> largada(n);
        vector<int> chegada(n);

        // Lê o grid de largada
        for (int i = 0; i < n; i++) {
            cin >> largada[i];
        }

        // Lê o grid de chegada
        for (int i = 0; i < n; i++) {
            cin >> chegada[i];
        }

        // Calcula e imprime o número mínimo de ultrapassagens
        int resultado = calcularUltrapassagens(n, largada, chegada);
        cout << resultado << endl;
    }

    return 0;
}
