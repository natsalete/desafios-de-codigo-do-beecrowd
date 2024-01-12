#include <iostream>

using namespace std;

int main() {

    int jogadores;

    while (cin >> jogadores) {

        int votos[jogadores], parcial = 0;

        if (!cin){
          break;
        }

        float x = ((jogadores / 3.0) * 2.0);


        for(int i = 0; i < jogadores; i++){

          cin >> votos[i];

          if(votos[i] == 1){
            parcial++;
          }
        }

        if(parcial >= x){
          cout << "impeachment" << endl;
        } else {
          cout << "acusacao arquivada" << endl;
        }

    }

    return 0;
}
