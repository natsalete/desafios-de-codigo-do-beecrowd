#include <iostream>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    int cont = n;

    string acao;
    while(m--){
      cin >> acao;
      if(acao == "fechou"){
        cont++;
      }else if(acao == "clicou"){
        cont--;
        if(cont < 0){
            cont = 0;
        }
      }
    }

    cout << cont << endl;

    return 0;
}
