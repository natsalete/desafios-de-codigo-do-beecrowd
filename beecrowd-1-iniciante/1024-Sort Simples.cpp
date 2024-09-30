#include <iostream>

using namespace std;

void troca(int v[], int a, int b){
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

// Complexidade de espaço: O(1)
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool houveTroca = false;
        for (int j = 0; j < (n - 1) - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
                houveTroca = true;
            }
        }
        if (!houveTroca) return;
    }
}

void imprimirVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}

int main(){
    int v[3], v2[3];

    for(int i = 0; i < 3; i++){
        cin >> v[i];
        v2[i] = v[i];
    }

    bubbleSort(v,3);
    imprimirVetor(v,3);
    cout << endl;
    imprimirVetor(v2,3);

    return 0;

}