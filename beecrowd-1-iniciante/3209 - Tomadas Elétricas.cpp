#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    int k, x, soma = 0;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> x;
        soma += x;
    }
    soma -= (k - 1);
    cout << soma << endl;
    }


    return 0;
}
