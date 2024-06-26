#include <iostream>

using namespace std;

bool ehAnoBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return ehAnoBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

int diasEntre(int ano1, int mes1, int dia1, int ano2, int mes2, int dia2) {
    int dias1 = dia1;
    for (int i = 1; i < mes1; i++) {
        dias1 += diasNoMes(i, ano1);
    }
    for (int i = 1; i < ano1; i++) {
        dias1 += ehAnoBissexto(i) ? 366 : 365;
    }

    int dias2 = dia2;
    for (int i = 1; i < mes2; ++i) {
        dias2 += diasNoMes(i, ano2);
    }
    for (int i = 1; i < ano2; ++i) {
        dias2 += ehAnoBissexto(i) ? 366 : 365;
    }

    return abs(dias2 - dias1);
}

int main() {
    int n;
    
    cin >> n;
    
    while(n--){
        int ano1, mes1, dia1, ano2, mes2, dia2;
        char t;

        cin >> ano1 >> t >> mes1 >> t >> dia1;

        cin >> ano2 >> t >> mes2 >> t >> dia2;

        cout << diasEntre(ano1, mes1, dia1, ano2, mes2, dia2) << endl;
    }

    return 0;
}
