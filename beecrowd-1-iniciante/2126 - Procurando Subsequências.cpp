#include <iostream>
#include <string>

using namespace std;

int main() {
    int caso = 1;
    string n1, n2;

    while (cin >> n1 >> n2) {
        int qtdSubsequencias = 0;
        int posicao = -1;

        for (int i = 0; i <= n2.size() - n1.size(); i++) {
            bool ehSubsequencia = true;
            for (int j = 0; j < n1.size(); j++) {
                if (n2[i + j]!= n1[j]) {
                    ehSubsequencia = false;
                    break;
                }
            }
            if (ehSubsequencia) {
                qtdSubsequencias++;
                posicao = i;
            }
        }

        cout << "Caso #" << caso << ":" << endl;
        if (qtdSubsequencias == 0) {
            cout << "Nao existe subsequencia" << endl << endl;
        } else {
            cout << "Qtd.Subsequencias: " << qtdSubsequencias << endl;
            cout << "Pos: " << posicao + 1 << endl << endl;
        }
        caso++;
    }

    return 0;
}
