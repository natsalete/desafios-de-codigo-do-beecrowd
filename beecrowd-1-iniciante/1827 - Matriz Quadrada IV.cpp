#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

bool is_integer(double n) {
  return fmod(n, 1.0) == 0.0;
}

int main(){
    int n;

    while(cin >> n){

        int matriz[n][n];

       for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
            matriz[i][j] = 0;
            }
        }

        double posicao = n / 3.0;

        int i_in, i_fim, j_in, j_fim;
        if(is_integer(posicao)){
            i_in = posicao;

            i_fim = n - posicao - 1;

            j_in = posicao;

            j_fim =  n - posicao - 1;

        }else{

            i_in = ceil(posicao) - 1;

            i_fim = n - ceil(posicao);

            j_in = ceil(posicao) - 1;

            j_fim =  n - ceil(posicao);
        }

        for(int i = i_in; i <= i_fim; i++){
            for(int j = j_in; j <= j_fim; j++){
                    matriz[i][j] = 1;
            }
        }

        double ponto_central = n/2;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j && i == ceil(ponto_central)){
                   matriz[i][j] = 4;
                }else if(i + j + 1 == n && matriz[i][j] != 1){
                    matriz[i][j] = 3;
                }else if(i == j && matriz[i][j] != 1){
                    matriz[i][j] = 2;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j];
            }
            cout << endl;
        }

        cout << endl;

    }




    return 0;
}


