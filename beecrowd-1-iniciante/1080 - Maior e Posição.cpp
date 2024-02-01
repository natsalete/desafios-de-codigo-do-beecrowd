#include <iostream>

using namespace std;

int main() {
    int v[101];

    int maior = 0, pos_maior;
    for(int i = 1; i <= 100; i++){

        cin >> v[i];

        if(v[i] > maior){
            maior = v[i];
            pos_maior = i;
        }
    }

    cout << maior << endl;
    cout << pos_maior << endl;

    return 0;
}









