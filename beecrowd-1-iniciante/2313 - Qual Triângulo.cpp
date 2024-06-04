#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if(a + b > c  && a + c > b && b + c > a){
        cout << "Valido";
        if(a != b && a != c && b != c){
            cout << "-Escaleno" << endl;
        }else if((a == b && a != c) || (a == c && a != b) || (b == c && c != a)){
            cout << "-Isoceles" << endl;
        }else {
            cout << "-Equilatero" << endl;
        }

        if((pow(a,2) + pow(b,2)) == pow(c,2) || (pow(a,2) + pow(c,2)) == pow(b,2) || (pow(b,2) + pow(c,2)) == pow(a,2)){
            cout << "Retangulo: S" << endl;
        }else {
            cout << "Retangulo: N" << endl;
        }
    }else {
        cout << "Invalido" << endl;
    }

    return 0;
}

