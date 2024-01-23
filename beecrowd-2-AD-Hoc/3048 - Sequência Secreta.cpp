#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;

    cin >> n;

    vector<int> sequencia;
    int x;

    while(n--){
        cin >> x;
        sequencia.push_back(x);
    }

    int posicao_inicial = sequencia[0];

    int cont = 1;

    for(int i = 1; i < sequencia.size(); i++){
        if(sequencia[i] != posicao_inicial){
            cont++;
            posicao_inicial = sequencia[i];
        }
    }

    cout << cont << endl;
    return 0;
}
