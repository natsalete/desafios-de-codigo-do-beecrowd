#include <iostream>

using namespace std;

int main(){
    int n, cont = 1, valor = 0, x = 0, maior = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> valor;

        if (valor == x){
            cont ++;
           
        }else {
            if (cont > maior){
                maior = cont;
            }
            cont = 1;
        }


        x = valor;
    }
    if (cont > maior){
      cout << cont << endl;

    }else{
    cout << maior << endl;
    }
}
