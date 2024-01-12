#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int n;

    cin >> n;
    cin.ignore();  // Ignora o caractere de nova linha pendente

    while (n--) {
        string mens;
        string mensagem_oculta;
        string mensagem;

        getline(cin, mens);

        for (int i = 0; i < mens.size(); i++) {
            if (isalpha(mens[i])) {
                mensagem += mens[i];
            } else if (mensagem.size() > 0) {
                mensagem_oculta += mensagem[0];
                mensagem.clear();
            }
        }

        if (!mensagem.empty()) { // para verificar se a elementos em mensagem
            mensagem_oculta += mensagem[0];
        }

        cout << mensagem_oculta << endl;
    }

    return 0;
}
