#include <iostream>

using namespace std;

int cont  = 0;

int fib(int n){

    if(n == 0){
        return 0;
        cont++;
    }

    if(n == 1){
        return 1;
        cont++;
    }

    cont ++;

    return fib(n -1) + fib(n-2);
}

int main(){
    int x;

    cin >> x;

    while(x--){
        int n, calls, result;

        cin >> n;

        result = fib(n);

        calls = cont;

        cout << "fib(" << n << ") = " << calls*2 << " calls = " << result << endl;
        cont = 0;
    }

    return 0;
}
