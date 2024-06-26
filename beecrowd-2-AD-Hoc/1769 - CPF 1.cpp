#include <iostream>

using namespace std;

int main() {

    char cpf[15];

    while(cin >> cpf){
        int a1 = cpf[0] - '0';
        int a2 = cpf[1] - '0';
        int a3 = cpf[2] - '0';
        int a4 = cpf[4] - '0';
        int a5 = cpf[5] - '0';
        int a6 = cpf[6] - '0';
        int a7 = cpf[8] - '0';
        int a8 = cpf[9] - '0';
        int a9 = cpf[10] - '0';
        int b1 = cpf[12] - '0';
        int b2 = cpf[13] - '0';

        int soma1 = (a1*1) + (a2*2) + (a3*3) + (a4*4) + (a5*5) + (a6*6) + (a7*7) + (a8*8) + (a9*9);
        int resto1 = soma1 % 11;
        bool verifica1 = false;
        if((resto1 == 10 && b1 == 0) || b1 == resto1){
            verifica1 = true;
        }

        int soma2 = (a1*9) + (a2*8) + (a3*7) + (a4*6) + (a5*5) + (a6*4) + (a7*3) + (a8*2) + (a9*1);
        int resto2 = soma2 % 11;
        bool verifica2 = false;
        if((resto2 == 10 && b2 == 0) || b2 == resto2){
            verifica2 = true;
        }

        if(verifica1 && verifica2){
            cout << "CPF valido" << endl;
        }else {
            cout << "CPF invalido" << endl;
        }

    }

    return 0;
}


