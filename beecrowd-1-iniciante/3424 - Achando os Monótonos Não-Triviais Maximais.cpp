#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Para limpar o buffer após a leitura de n

    string c(n, ' '); // Inicializa a string com n espaços

    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    int cont = 0;
    for(int i = 0; i < n; i++){
        if(c[i] == 'a'){
            if((i > 0 && c[i-1] == 'a') || (i < n-1 && c[i+1] == 'a')){
                cont++;
            }
        }
    }

    cout << cont << endl;

    return 0;
}
