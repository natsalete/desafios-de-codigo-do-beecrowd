#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){
        if(n == 1){
            cout << setw(3) << 1 << endl << endl;
        }else{
            int matriz[100][100];
            int vezes = n - 1;

            int aux = 1, i_in = 0, i_fim = n-1, j_in = 0, j_fim = n-1;
            int aux_linha = 0, aux_coluna = n-1;

            while(vezes--){

                for(int i = i_in; i <= i_fim; i++){
                    for(int j = j_in; j <= j_fim; j++){
                        if(i == aux_linha || j == aux_linha || i == aux_coluna || j == aux_coluna){
                            matriz[i][j] = aux;
                        }
                    }
                }
                aux++;
                aux_linha += 1;
                aux_coluna -= 1;
                i_in += 1;
                i_fim -= 1;
                j_in += 1;
                j_fim -= 1;
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if(j == n-1){
                            cout << setw(3) << matriz[i][j];
                        }else{
                            cout << setw(3) << matriz[i][j] << " ";
                        }
                }
                cout << endl;
            }

            cout << endl;
        }
  }


    return 0;
}
