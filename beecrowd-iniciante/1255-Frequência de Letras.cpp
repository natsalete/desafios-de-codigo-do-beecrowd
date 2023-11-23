#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;
    cin.ignore();  // Limpar o buffer do teclado após a leitura de 'n'

    while (n--) {
        string texto;
        getline(cin, texto);  // Usar getline para ler uma linha inteira

        transform(texto.begin(), texto.end(), texto.begin(), ::tolower);

        int maior = 0, cont = 0;
        string mais;

        for (int i = 0; i < texto.size(); i++) {
            if (isalpha(texto[i])) {
                for (int j = i + 1; j < texto.size(); j++) {
                    if (texto[i] == texto[j]) {
                        cont++;
                    }
                }
                if (cont > maior) {
                    maior = cont;
                    mais = texto[i];
                } else if (cont == maior) {
                    mais += texto[i];
                }
                cont = 0;
            }
        }

        sort(mais.begin(), mais.end());
        cout << mais << endl;
    }

    return 0;
}
