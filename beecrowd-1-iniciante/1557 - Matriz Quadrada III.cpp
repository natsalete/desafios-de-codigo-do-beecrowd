#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){

        int matriz[n][n];
        int aux = 1, aux2 = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matriz[i][j] = aux;
                aux *= 2;
            }
            aux2 *= 2;
            aux = aux2;
        }

        int maior = matriz[0][0];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                }
            }
        }

    // Calcular o número de dígitos do maior número
    string str = to_string(maior);
    int num_digitos = str.size();

    // Imprimir o número de dígitos
    //cout << num_digitos << endl;


        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if(j == n-1){
                            cout << setw(num_digitos) << matriz[i][j];
                        }else{
                            cout << setw(num_digitos) << matriz[i][j] << " ";
                        }
                }
                cout << endl;
            }

            cout << endl;
        }



    return 0;
}

