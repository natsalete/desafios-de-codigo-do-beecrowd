#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int v[n];

    int cont = 0, cont2 = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] >= 10 && v[i] <= 20){
           cont++;
        }else{
            cont2++;
        }
    }

    cout << cont << " in" << endl;
    cout << cont2 << " out" << endl;

    return 0;
}







