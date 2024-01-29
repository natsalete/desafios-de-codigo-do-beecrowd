#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x , y, aux1, aux2;

    cin >> x >> y;

    if (y >= x){
        aux1 = x;
        aux2 = y;

    }else {
        aux1 = y;
        aux2 = x;
    }

    for(int i = aux1+1; i < aux2; i++){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }


    return 0;
}
