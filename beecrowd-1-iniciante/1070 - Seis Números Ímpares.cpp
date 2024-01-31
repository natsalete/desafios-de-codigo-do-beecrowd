#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int cont = 0;
    for(int i = n; i < n+12; i++){
        if(i % 2 != 0){
           cout << i << endl;
           cont++;
        }
        if(cont == 6){
            break;
        }
    }


    return 0;
}








