#include <iostream>

using namespace std;

int main() {
    int a, v, x, y, cont = 1;

    do {
    cin >> a >> v;

    int vetor[a];
    for (int i = 1; i <= a; i++){
        vetor[i] = 0;
    }

    for(int i = 1; i <= v; i++){
        cin >> x >> y;
        vetor[x]++;
        vetor[y]++;
    }

    int maior = 0;
    for(int i= 1; i <= a; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    if((a != 0) and (v != 0)){
    cout << "Teste" << " " << cont++ << "\n";
    }

    for(int i=1; i <= a; i++){
      if (vetor[i] == maior){
        cout << i << " ";
      }
    }
    if((a != 0) and (v != 0)){
    cout << "\n\n";
    }
    }while((a != 0) and (v != 0));



    return 0;
}
