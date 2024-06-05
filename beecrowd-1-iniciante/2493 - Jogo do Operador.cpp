#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct expressao {
    int x;
    int y;
    int z;
    char igual;
};

bool validarResposta(expressao exp, char operador) {
    int resultado;
    if (operador == '+') resultado = exp.x + exp.y;
    else if (operador == '-') resultado = exp.x - exp.y;
    else if (operador == '*') resultado = exp.x * exp.y;

    if (operador == 'I') {
        return !(exp.x + exp.y == exp.z || exp.x - exp.y == exp.z || exp.x * exp.y == exp.z);
    }
    return (resultado == exp.z);
}

int main() {
    int t;
    while (cin >> t) {
        vector<expressao> expressoes(t);
        for (int i = 0; i < t; i++) {
            cin >> expressoes[i].x >> expressoes[i].y >> expressoes[i].igual >> expressoes[i].z;
        }

        vector<string> jogadoresErrados;
        int cont = 0;
        for (int i = 0; i < t; i++) {
            string nome;
            int e;
            char operador;
            cin >> nome >> e >> operador;

            if (!validarResposta(expressoes[e - 1], operador)) {
                jogadoresErrados.push_back(nome);
            } else {
                cont++;
            }
        }

        sort(jogadoresErrados.begin(), jogadoresErrados.end());

        if (cont == t) {
            cout << "You Shall All Pass!" << endl;
        } else if (jogadoresErrados.size() == t) {
            cout << "None Shall Pass!" << endl;
        } else {
            for (size_t i = 0; i < jogadoresErrados.size(); ++i) {
                cout << jogadoresErrados[i];
                if (i < jogadoresErrados.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
