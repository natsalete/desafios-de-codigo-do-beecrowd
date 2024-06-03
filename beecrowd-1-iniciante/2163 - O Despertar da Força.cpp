#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    int matriz[x][y];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> matriz[i][j];
        }
    }

    bool verifica = false;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if (matriz[i][j] == 42 &&
                matriz[i][j+1] == 7 &&
                matriz[i][j-1] == 7 &&
                matriz[i-1][j-1] == 7 &&
                matriz[i-1][j] == 7 &&
                matriz[i-1][j+1] == 7 &&
                matriz[i+1][j+1] == 7 &&
                matriz[i+1][j] == 7 &&
                matriz[i+1][j-1] == 7){
                    cout << i+1 << " " << j+1 << endl;
                    verifica = true;
                    break;
            }
        }
    }

    if(!verifica){
       cout << "0 0" << endl;
    }

    return 0;
}

