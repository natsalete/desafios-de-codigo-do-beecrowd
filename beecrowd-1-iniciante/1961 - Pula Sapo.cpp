#include <iostream>
using namespace std;

int main() {
    int p, n;

    cin >> p >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int aux = v[0], dif = 0;
    bool ok = true;
    for(int i = 1; i < n; i++){
        dif = aux - v[i];
       if(abs(dif) <= p){
            ok = true;
       } else {
            ok = false;
            break;
       }

       aux = v[i];
    }

    if(ok){
        cout << "YOU WIN" << endl;
    }else{
        cout << "GAME OVER" << endl;
    }


  return 0;
}


