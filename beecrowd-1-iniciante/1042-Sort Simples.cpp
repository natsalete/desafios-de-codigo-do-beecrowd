#include <iostream>
using namespace std;

void ordenar(int* a, int* b, int* c) {
    if (*a > *b) {
        swap(*a, *b);
    }
    if (*a > *c) {
        swap(*a, *c);
    }
    if (*b > *c) {
        swap(*b, *c);
    }
}

int main() {
    int x, y, z;

    // Lendo os valores
    cin >> x >> y >> z;

    // Guardando os valores originais
    int origX = x, origY = y, origZ = z;

    // Ordenando usando ponteiros
    ordenar(&x, &y, &z);

    // Imprimindo os valores em ordem crescente
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    // Linha em branco
    cout << endl;

    // Imprimindo os valores na ordem original
    cout << origX << endl;
    cout << origY << endl;
    cout << origZ << endl;

    return 0;
}
