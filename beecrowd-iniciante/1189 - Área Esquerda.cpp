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

    int aux = 0;

    for(int i = 1; i <= 5; i++){
        for(int j = 0; j <= aux; j++){
            soma+= m[i][j];
        }
    aux++;
    }

    aux = 4;
    for(int i = 6; i <= 10; i++){
        for(int j = 0; j <= aux; j++){
            soma+= m[i][j];
        }
    aux--;
    }
       if(o == 'S'){
        cout << soma << endl;
    }else {
        soma = soma/30;
        cout << soma << endl;
    }


    return 0;
}

