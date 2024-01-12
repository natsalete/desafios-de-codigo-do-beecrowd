#include <iostream>

using namespace std;

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fib(n -1) + fib(n-2);
}

int main(){
    int n;

    cin >> n;

    cout << 0 << " ";

    for(int i = 0; i < n-1; i++){
        if(i == n - 2){
            cout << fib(i) << endl;
        }else{
        cout << fib(i) << " ";
        }
    }
    return 0;
}
