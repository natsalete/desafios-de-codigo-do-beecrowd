#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int valor;
    vector <int> valores;
    vector <int> valores_ordem;

    for(int i = 0; i < 3; i++){
        cin >> valor;
        valores.push_back(valor);
        valores_ordem.push_back(valor);
    }

    sort(valores.begin(), valores.end());

    for(int i = 0; i < 3; i++){
        cout << valores[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << valores_ordem[i] << endl;
    }



    return 0;
}