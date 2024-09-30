#include <iostream>

using namespace std;

void troca(int v[], int a, int b){
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

// Complexidade de espaço: O(1)
int bubbleSort(int v[], int n) {
    int cont = 0;
    for (int i = 0; i < n - 1; i++) {
        //bool houveTroca = false;
        for (int j = 0; j < (n - 1) - i; j++) {
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
                //houveTroca = true;
                cont++;
            }
        }
        //if (!houveTroca) return 0;
    }
    return cont;
}

void imprimirVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}

int main(){
    int n;

    cin >> n;

    while(n--){
        int l;

        cin >> l;

        int v[l];

        for(int i = 0; i < l; i++){
            cin >> v[i];
        }

        cout << "Optimal train swapping takes " << bubbleSort(v,l) << " swaps." << endl;

    }
    return 0;

}