#include <iostream>

using namespace std;

int main(){
    int n, cont = 0;

    while (cin >> n){

        if(n == 0){
            return 0;
        }

        string jogador_1;
        string jogador_2;

        cin >> jogador_1;
        cin >> jogador_2;

        cont++;

        cout << "Teste " << cont << endl;

        while(n--){

        int b, c;

           cin >> b >> c;

           if((b + c) % 2 == 0){
             cout << jogador_1 << endl;

           } else {
             cout << jogador_2 << endl;
           }
        }
        cout << endl;
    }

    return 0;
}
