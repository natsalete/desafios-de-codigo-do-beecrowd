#include <iostream>

using namespace std;

int main(){
    int x, y;

    cin >> x;

    do{
        cin >> y;
    }while(y <= x);

    int cont = 0, soma = 0;
    for(int i = x; i < y; i++){
        soma += i;
        cont++;
        if(soma >= y){
           break;
        }
    }

    cout << cont << endl;

    return 0;
}


