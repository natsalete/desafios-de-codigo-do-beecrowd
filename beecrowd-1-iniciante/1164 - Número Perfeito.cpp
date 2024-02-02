#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    while(x--){
        int n;

        cin >> n;

        int soma = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
               soma += i;
            }
        }

        if(soma == n){
            cout << n << " eh perfeito" << endl;
        }else{
            cout << n << " nao eh perfeito" << endl;
        }
    }

  return 0;
}

