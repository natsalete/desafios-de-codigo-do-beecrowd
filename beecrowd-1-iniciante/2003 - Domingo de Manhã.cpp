#include <iostream>

using namespace std;

int main(){
    int hora;
    char c;
    int minutos;

    while(cin >> hora >> c >> minutos){

        int hora_final;
        char ponto;
        int minutos_final;

        minutos_final = (minutos + 60) - 60;
        hora_final = hora + 1;

        if(hora_final < 8){
            cout << "Atraso maximo: 0" << endl;
        }else {
            cout << "Atraso maximo: " << (hora_final - 8) * 60 + minutos_final << endl;
        }
    }


    return 0;
}



