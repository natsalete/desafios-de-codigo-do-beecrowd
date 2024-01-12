#include <iostream>

using namespace std;

int main() {

    int n, x, conta = 0, contb = 0;

    do{

    conta = 0;
    contb = 0;

     cin >> n >> x;

     int alice[n];
     int beatriz[x];

     for (int i = 0;  i < n; i++){
        cin >> alice[i];
        if (i > 0){
          if (alice[i] == alice[i-1]){
                alice[i - 1] = 0;
            }
        }
     }
     for (int i = 0; i < x; i++){
        cin >> beatriz[i];
      if(i > 0){
        if (beatriz[i] == beatriz[i-1]){
                beatriz[i - 1] = 0;
            }
      }
     }

    // verificando quais cartas tem nas duas e zerando as iguais
     for(int i = 0; i < n; i++){
        for(int j = 0; j < x; j++){
            if (alice[i] == beatriz[j]){
                alice[i] = 0;
                beatriz[j] = 0;
            }
        }

     }
     //contando quantas cartas sobraram para elas compartilharem
     for(int i = 0; i < n; i++){
        if (alice[i] > 0){
        conta++;
       }
     }
     for(int i = 0; i < x; i++){
       if (beatriz[i] > 0){
        contb++;
       }
     }

    // imprimindo o menor conjunto de carta
    if(n != 0 and x != 0){
        cout << min(conta, contb) << endl;
    }

    }while((n != 0) and (x != 0));
    return 0;
}
