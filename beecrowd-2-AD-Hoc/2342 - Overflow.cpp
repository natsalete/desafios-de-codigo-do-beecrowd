#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int  P, Q, resultado;
    char C;

    cin >> P >> C >> Q;

    switch (C){
    case '+':
       resultado = P + Q;
       break;
    case '*':
        resultado = P * Q;
        break;
    }

    if(resultado > n){
       cout << "OVERFLOW" << endl;
    }else{
       cout << "OK" << endl;
    }

    return 0;
}



