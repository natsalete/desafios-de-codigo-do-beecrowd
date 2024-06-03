#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int matriz[n+1][n+1];

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cont = 0;
            if(matriz[i][j] == 1){
                cont++;
            }
            if(matriz[i][j+1] == 1){
                cont++;
            }
            if(matriz[i+1][j] == 1){
                cont++;
            }
            if(matriz[i+1][j+1] == 1){
                cont++;
            }
            if(cont >= 2){
                cout << "S";
            }else {
                cout << "U";
            }
        }
        cout << endl;
    }

    //cout << endl;
    
    return 0;
}
