#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        int x, y, soma = 0,cont = 0;

        cin >> x >> y;

        for(int i = x; i < x + (y*2); i++){
            if(i % 2 != 0){
                soma += i;
                cont++;
            }
            if(cont == y){
                break;
            }
        }

        cout << soma << endl;
    }
    return 0;
}

