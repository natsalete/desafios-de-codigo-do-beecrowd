#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int aux = n * 4;
    int cont = 0;
    for(int i = 1; i <= aux; i ++){
        cont++;
        cout << i << " ";
        if(cont == 3){
          cout << "PUM" << endl;
          cont = 0;
          i++;
        }
    }


    return 0;
}














