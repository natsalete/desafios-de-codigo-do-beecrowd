#include <iostream>
#include <string>

using namespace std;

int main() {
    int C;
    cin >> C;

    int cont = 0;
    while (C--) {
        string escolhaRajesh, escolhaSheldon;

        cin >> escolhaSheldon >> escolhaRajesh;

        cont++;
        cout << "Caso #" << cont << ": ";

        if (escolhaRajesh == escolhaSheldon) {
            cout << "De novo!" << endl;
        } else if (
            (escolhaRajesh == "tesoura" && (escolhaSheldon == "papel" || escolhaSheldon == "lagarto")) ||
            (escolhaRajesh == "papel" && (escolhaSheldon == "pedra" || escolhaSheldon == "Spock")) ||
            (escolhaRajesh == "pedra" && (escolhaSheldon == "lagarto" || escolhaSheldon == "tesoura")) ||
            (escolhaRajesh == "lagarto" && (escolhaSheldon == "Spock" || escolhaSheldon == "papel")) ||
            (escolhaRajesh == "Spock" && (escolhaSheldon == "tesoura" || escolhaSheldon == "pedra"))
        ) {
            cout << "Raj trapaceou!" << endl;
        } else {
            cout << "Bazinga!" << endl;
        }
    }

    return 0;
}

