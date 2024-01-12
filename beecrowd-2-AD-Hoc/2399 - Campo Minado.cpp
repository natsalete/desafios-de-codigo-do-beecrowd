#include <iostream>

using namespace std;

int main() {
    int n, v[50];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int cont = 0;

        if (i - 1 >= 0) {
            cont += v[i - 1];
        }

        cont += v[i];

        if (i + 1 < n) {
            cont += v[i + 1];
        }

        cout << cont << endl;
    }

    return 0;
}
