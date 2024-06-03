#include <iostream>
#include <iomanip>

using namespace std;

double calc_sqrt(int N) {
    double b = 0.0;

    // Se N for 0, a aproximação é diretamente 3.0
    if (N == 0) {
        return 1.0;
    }

    // Iniciando a fração continuada
    b = 2.0;
    for (int i = 1; i < N; i++) {
        b = 2.0 + 1.0 / b;
    }

    // Adicionando a parte final da fração continuada
    double a = 1.0 + 1.0 / b;

    return a;
}

int main() {
    int N;
    cin >> N;

    cout << fixed << setprecision(10) << calc_sqrt(N) << endl;

    return 0;
}

