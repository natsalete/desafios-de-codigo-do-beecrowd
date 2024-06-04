#include <iostream>

using namespace std;

int main() {
    int n,cont = 1, vetor[20001];

    while(cin >> n){
    if(n == 0){
        return 0;
    }else{

    int w, v,  vetor1[n], vetor2[n];

    for (int i = 0; i < n; i++){
        vetor1[i] = 0;
        vetor2[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cin >> w >> v;
        vetor1[i] = v;
        vetor2[i] = w;
    }

    int maior = 0;
    for(int i = 0; i < n; i++){
        if(vetor1[i] > maior){
            maior = vetor1[i];
        }
    }

    cout << "Turma"<< " " << cont++ << endl;

    for(int i = 0; i < n; i++){
        if(vetor1[i] ==  maior){
           cout << vetor2[i] << " ";
        }
    }

    cout << "\n\n";
    }
    }
    return 0;
}


