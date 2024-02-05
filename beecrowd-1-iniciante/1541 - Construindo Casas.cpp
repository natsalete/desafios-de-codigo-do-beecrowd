#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    while (cin >> a && a != 0){
            
        cin >> b >> c;
    
        int tamanho_do_terreno = ((a * b)* 100)/ c;
        int lado_terreno = sqrt(tamanho_do_terreno);

        cout << lado_terreno << endl;
    }

    return 0;
}


