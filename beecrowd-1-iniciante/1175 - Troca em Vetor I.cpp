#include <iostream>

using namespace std;

int main() {
    int n[20];

    for(int i = 0; i < 20; i++){
        cin >> n[i];
    }

    int cont = 0;
    for(int i = 19 ; i >= 0; i--){
        cout << "N[" << cont << "] = " << n[i] << endl;
        cont++;
    }


  return 0;
}



