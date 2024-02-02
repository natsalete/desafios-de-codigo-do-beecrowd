#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int v[1000];
    int  aux = 0;
    for(int i = 0; i < 1000; i++){
        v[i] = aux;
        aux++;
        if(aux == n){
            aux = 0;
        }
        cout << "N[" << i << "] = " << v[i] << endl;
    }

    return 0;
}
