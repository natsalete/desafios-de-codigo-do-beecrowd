#include <iostream>
#include <string>

using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        string escolhaRajesh, escolhaSheldon;
        cin >> escolhaRajesh >> escolhaSheldon;

        if (escolhaRajesh == escolhaSheldon) {
            cout << "empate" << endl;
        } else if (
            (escolhaRajesh == "tesoura" && (escolhaSheldon == "papel" || escolhaSheldon == "lagarto")) ||
            (escolhaRajesh == "papel" && (escolhaSheldon == "pedra" || escolhaSheldon == "spock")) ||
            (escolhaRajesh == "pedra" && (escolhaSheldon == "lagarto" || escolhaSheldon == "tesoura")) ||
            (escolhaRajesh == "lagarto" && (escolhaSheldon == "spock" || escolhaSheldon == "papel")) ||
            (escolhaRajesh == "Spock" && (escolhaSheldon == "tesoura" || escolhaSheldon == "pedra"))
        ) {
            cout << "rajesh" << endl;
        } else {
            cout << "sheldon" << endl;
        }
    }

    return 0;
}
