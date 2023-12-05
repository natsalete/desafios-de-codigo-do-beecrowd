#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n--){
        int l;

        cin >> l;

        string caracter[l];

        for (int i = 0; i < l; i++) {
            cin >> caracter[i];
        }

        int valor = 0;
        for (int i = 0; i < l; i++){
            for(int j = 0; j < caracter[i].size(); j++){
                int posicao = caracter[i][j] - 'A';
                valor += posicao + i + j;
            }
        }

        cout << valor << endl;
    }
    return 0;
}
