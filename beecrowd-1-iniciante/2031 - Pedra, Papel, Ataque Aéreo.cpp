#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        string jog1;
        string jog2;

        cin >> jog1 >> jog2;

        if(jog1 == "pedra" && jog2 == "papel" ||
           jog1 == "ataque" && jog2 == "pedra" ||
           jog1 == "ataque" && jog2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }else if(jog1 == "papel" && jog2 == "papel"){
            cout << "Ambos venceram" << endl;
        }else if(jog1 == "pedra" && jog2 == "pedra"){
            cout << "Sem ganhador" << endl;
        }else if(jog1 == "ataque" && jog2 == "ataque"){
            cout << "Aniquilacao mutua" << endl;
        }else {
            cout << "Jogador 2 venceu" << endl;
        }

    }
    return 0;
}

