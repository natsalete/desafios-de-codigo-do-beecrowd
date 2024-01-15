#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int g, p, s, k;
int corrida[101][101], sistema[101], ponto[101];

int main() {
    int m;
    while (cin >> g >> p && (g || p)) {
        for (int i = 0; i < g; ++i) {
            for (int j = 0; j < p; ++j) {
                cin >> corrida[i][j];
            }
        }

        cin >> s;

        while (s--) {
            memset(ponto, 0, sizeof(ponto));
            memset(sistema, 0, sizeof(sistema));

            cin >> k;

            for (int i = 0; i < k; ++i) {
                cin >> sistema[i];
            }

            for (int i = 0; i < g; ++i) {
                for (int j = 0; j < p; ++j) {
                    ponto[j] += sistema[corrida[i][j] - 1];
                }
            }

            m = 0;

            for (int i = 0; i < p; ++i) {
                if (ponto[i] > m) {
                    m = ponto[i];
                }
            }

            vector<int> identificador;
            bool jaAdicionado[101] = {false};

            for (int i = 0; i < p; ++i) {
                if (ponto[i] == m && !jaAdicionado[i]) {
                    identificador.push_back(i + 1);
                    jaAdicionado[i] = true;
                }
            }

            for (int i = 0; i < identificador.size(); ++i) {
                cout << identificador[i];
                if (i != identificador.size() - 1) {
                    cout << " ";
                } else {
                    cout << endl;
                }
            }
        }
    }

    return 0;
}
