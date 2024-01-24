#include <iostream>

using namespace std;

int bubbleSort(int *v, int l){
    int continua, aux, cont = 0, fim = l;

    do{
        continua = 0;
        for(int i = 0; i < fim-1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = i;
                cont++;
            }
        }
        fim--;
    }while(continua != 0);

    return cont;
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
