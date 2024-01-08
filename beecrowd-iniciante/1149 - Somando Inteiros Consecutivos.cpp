#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    int n, soma = 0;

    do{
        cin >> n;
    }while(n <= 0);


    for(int i = 0; i <= n - 1; i++){
        soma += i + a;

    }

    cout << soma << endl;

    return 0;
}
