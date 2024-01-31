#include <iostream>
#include <math.h>


using namespace std;

int main(){
    float a, b, c;

    cin >> a >> b >> c;

    float aux;

    if(a < b){
        aux = b;
        b = a;
        a = aux;
    }
    if(a < c){
        aux = c;
        c = a;
        a = aux;
    }
    if(b < c){
        aux = c;
        c = b;
        b = aux;
    }

    if (a >= b + c ){

        cout << "NAO FORMA TRIANGULO" << endl;

    }else{

        if( pow(a,2) == (pow(b, 2) + pow(c,2))){

            cout << "TRIANGULO RETANGULO" << endl;

        }else if(pow(a,2) > (pow(b, 2) + pow(c,2))){

            cout << "TRIANGULO OBTUSANGULO" << endl;

        }else {

            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if(a == b && a == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if((a == b) || (a == c) || (b == c)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }


   return 0;
}



