#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string mens;
        getline(cin, mens);

        // Imprimir a metade esquerda
        for (int i = mens.size() / 2 - 1; i >= 0; i--) {
            cout << mens[i];
        }

        // Imprimir a metade direita
        for (int i = mens.size() - 1; i >= mens.size() / 2; i--) {
            cout << mens[i];
        }

        cout << endl;
    }

    return 0;
}
