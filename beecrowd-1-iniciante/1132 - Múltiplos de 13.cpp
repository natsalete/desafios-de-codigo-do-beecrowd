#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }
    
    long long soma = 0;
    for(int i = x; i <= y; i ++){
        if(i % 13 != 0){
          soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}













