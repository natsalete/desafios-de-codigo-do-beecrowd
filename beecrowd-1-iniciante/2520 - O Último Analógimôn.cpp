#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;

    while(cin >> n >> m){
        int matriz[n][m];

        int xc, yc, xa, ya;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matriz[i][j];
                if(matriz[i][j] == 1){
                    xc = i;
                    yc = j;
                }else if(matriz[i][j] == 2){
                    xa = i;
                    ya = j;
                }
            }
        }

        int distancia = abs(xc - xa) + abs(yc - ya);

        cout << distancia << endl;
    }

    return 0;
}

