#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int x, matricula;
    double y, maior = 0;
    while(n--){
        cin >> x >> y;
        if(y >= 8 && y > maior){
            maior = y;
            matricula = x;
        }
    }

    if(maior != 0){
        cout << matricula << endl;
    }else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
