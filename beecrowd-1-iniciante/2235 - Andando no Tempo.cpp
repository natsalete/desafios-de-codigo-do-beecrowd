#include <iostream>

using namespace std;

/*Para voltar para o exato ponto de saída, é necessário que ocorra alguma das alternativas:
dois créditos são iguais ou um crédito é igual à soma dos outros dois. Com apenas alguns
comandos if a solução fica com complexidade O(1).*/

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if(a == b || a == c || b == c ||
       a + b == c || a + c == b || b + c == a){
        cout << "S" << endl;
    }else {
        cout << "N" << endl;
    }

    return 0;
}

