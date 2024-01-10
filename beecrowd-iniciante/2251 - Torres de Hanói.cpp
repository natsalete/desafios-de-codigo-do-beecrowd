#include <iostream>
#include <cmath>

using namespace std;

int hanoi(int n) {
    return pow(2, n) - 1;
}

int main() {
    int n;
    int teste = 0;

    while (cin >> n && n != 0) {
        teste++;
        cout << "Teste " << teste << endl;
        cout << hanoi(n) << endl << endl;
    }

    return 0;
}
