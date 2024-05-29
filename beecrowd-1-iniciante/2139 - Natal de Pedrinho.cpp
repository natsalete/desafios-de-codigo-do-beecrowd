#include <iostream>

using namespace std;

int main(){
    int mes, dia;

    while (cin >> mes >> dia){
        int dias = 0;

        if(mes == 1){
            dias = 360 - dia;
        }else if(mes == 2){
            dias = 360 - 31 - dia;
        }else if(mes == 3){
            dias = 360 - 31 - 29 - dia;
        }else if(mes == 4){
            dias = 360 - 31 - 29 - 31 - dia;
        }else if(mes == 5){
            dias = 360 - 31 - 29 - 31 - 30 - dia;
        }else if(mes == 6){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - dia;
        }else if(mes == 7){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - dia;
        }else if(mes == 8){
             dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - dia;
        }else if(mes == 9){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - dia;
        }else if(mes == 10){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - dia;
        }else if(mes == 11){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - dia;
        }else if(mes == 12){
            dias = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - dia;
        }

        if(dias < 0){
            cout << "Ja passou!" << endl;
        }else if (dias == 0){
            cout << "E natal!" << endl;
        }else if(dias == 1){
            cout << "E vespera de natal!" << endl;
        }else {
            cout << "Faltam " << dias << " dias para o natal!" << endl;
        }

    }



    return 0;
}

