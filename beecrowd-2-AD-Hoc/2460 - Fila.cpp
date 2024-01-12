#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, fila, deixaram, qtd;
    cin >> n;

    vector<int>numeros;
    for(int i = 0; i < n; i++){
        cin >> fila;
        numeros.push_back(fila);
    }

    cin >> qtd;

    for(int i = 0; i < qtd; i++){
       cin >> deixaram;
      for(int i = 0; i < n; i++){
        if(numeros[i] == deixaram){
            numeros.erase(numeros.begin()+ i);
            break;
        }
      }
    }

    for(int i = 0; i < numeros.size(); i++){
         cout << numeros[i];
        if(i < numeros.size() - 1){
           cout << " ";
        }
    }

    cout << endl;

    return 0;
}

