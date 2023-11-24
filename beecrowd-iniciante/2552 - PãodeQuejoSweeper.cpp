#include <iostream>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        int mat[n][m];

        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> mat[i][j];
                }
            }
        int soma = 0;
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(mat[i][j] == 0){
                        if(j > 0){
                            soma += mat[i][j-1];
                        }
                        if(j < m-1){
                            soma += mat[i][j+1];
                        }
                        if(i > 0){
                            soma += mat[i-1][j];
                        }
                        if(i < n-1){
                            soma += mat[i+1][j];
                        }
                        cout << soma;
                        soma = 0;
                    }else {
                        cout << 9;
                    }
                }
                cout << endl;
        }
    }


    return 0;
}
