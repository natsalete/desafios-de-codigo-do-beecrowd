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

    int aux1 = 1, aux2 = 10;

    for(int i = 0; i < 5; i++){
        for(int j = aux1; j <= aux2; j++){
            soma+= m[i][j];
        }
    aux1++;
    aux2--;
    }

    if(o == 'S'){
        cout << soma << endl;

    }else {
        cout << soma/30 << endl;
    }


    return 0;
}





