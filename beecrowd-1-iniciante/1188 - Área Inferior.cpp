#include <iostream>
#define n 12

using namespace std;

int main(){
    char o;
    cin >> o;

    double m[n][n], soma = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    int aux1 = 5, aux2 = 6;
    if(o == 'S'){
        for(int i = 7; i < n; i++){
            for(int j = aux1; j <= aux2; j++){
            soma+= m[i][j];
            }
        aux1--;
        aux2++;
        }
        cout << soma << endl;

    }else {
        for(int i = 7; i < n; i++){
            for(int j = aux1; j <= aux2; j++){
            soma+= m[i][j];
            }
        aux1--;
        aux2++;
        }
        soma = soma/30;
        cout << soma << endl;
    }


    return 0;
}




