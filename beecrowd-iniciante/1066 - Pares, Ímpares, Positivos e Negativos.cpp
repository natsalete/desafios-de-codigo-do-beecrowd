#include <iostream>


using namespace std;

int main (){
    int n = 5;
    int positivo = 0, negativo = 0, par = 0, impar = 0;

    while(n--){
        int x;

        cin >> x;

        if(x > 0){
            positivo++;
        }else if (x < 0){
            negativo++;
        }

        if(x % 2 == 0){
            par++;
        }else{
            impar++;
       }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}

