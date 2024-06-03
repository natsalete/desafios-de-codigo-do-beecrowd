#include <iostream>

using namespace std;

int main(){
    string mensagem;

    getline(cin, mensagem);

    if(mensagem.size() <=  80){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}