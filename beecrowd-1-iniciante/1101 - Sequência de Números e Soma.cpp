#include <iostream>

using namespace std;

int main () {
    int m, n, aux1, aux2;

    while (cin >> n >> m && n > 0 && m > 0){

        int soma = 0;
        if (m >= n){
            aux1 = n;
            aux2 = m;

        }else {
            aux1 = m;
            aux2 = n;
        }

        for(int i = aux1; i <= aux2; i++){
            cout << i << " ";
            soma += i;
        }

        cout << "Sum=" << soma << endl;
    }

    return 0;
}
