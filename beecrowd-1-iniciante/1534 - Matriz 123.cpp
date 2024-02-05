#include <iostream>

using namespace std;

int main(){
    int n;

    while(cin >> n){

        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i + j + 1 == n){
                    matriz[i][j] = 2;
                }else if(i == j){
                    matriz[i][j] = 1;
                }else {
                    matriz[i][j] = 3;
                }
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j];
            }
            cout << endl;
        }

    }



    return 0;
}

