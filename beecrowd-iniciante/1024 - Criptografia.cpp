#include <iostream>
#include <ctype.h>
#include <algorithm>

using namespace std;

void deslocarMetade(string mensagem){
    for (int i = mensagem.size()/2; i <= mensagem.size(); i++){
            mensagem[i] -= 1;
    }
    cout << mensagem << endl;
}

void inverte(string mensagem){
    reverse(mensagem.begin(), mensagem.end());
    deslocarMetade(mensagem);
}

void deslocar(string mensagem){
    for (int i = 0; i < mensagem.size(); i++){
        if(isalpha(mensagem[i])){
            mensagem[i] += 3;
        }
    }
    inverte(mensagem);
}


int main(){
    int n;

    cin >> n;

    cin.ignore();

    while(n--){

    string mensagem;

    getline(cin,mensagem);

    deslocar(mensagem);
    }

    return 0;
}
