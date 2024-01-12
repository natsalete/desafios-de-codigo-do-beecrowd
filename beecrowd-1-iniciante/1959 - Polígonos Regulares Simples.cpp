#include <iostream>

using namespace std;

int main() {
    int n, l;
    long long p;  // Alterado para long long para suportar números maiores

    cin >> n >> l;

    p = static_cast<long long>(n) * l;  // Conversão explícita para long long

    cout << p << endl;

    return 0;
}
