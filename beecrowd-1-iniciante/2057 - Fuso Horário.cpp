#include <iostream>

using namespace std;

int main(){
    int s, t, f;

    cin >> s >> t >> f;

    int hora = s + t + f;

    if(hora >= 24){
        cout << hora - 24 << endl;
    }else if (hora < 0){
        cout << 24 + hora << endl;
    }else {
        cout << hora << endl;
    }
    return 0;
}


