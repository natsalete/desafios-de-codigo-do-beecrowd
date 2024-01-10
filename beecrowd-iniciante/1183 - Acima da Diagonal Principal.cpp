#include <iostream>

using namespace std;

int main(){

    char n;

    cin >> n;

    float matriz[12][12], soma = 0, cont = 0;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> matriz[i][j];
            if(j >= i + 1){
                soma += matriz[i][j];
                cont++;
            }
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    if (n == 'S'){
        cout << soma << endl;
    }else {
        cout << soma / cont << endl;
    }
    return 0;
}
