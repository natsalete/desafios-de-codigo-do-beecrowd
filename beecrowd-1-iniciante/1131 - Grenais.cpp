#include <iostream>

using namespace std;

int main() {
    int inter, gremio, cont_inter = 0, cont_gremio = 0, cont_grenais = 0, cont_empate = 0;
    int x;

    do{

        cin >> inter >> gremio;

        cont_grenais++;

        if(inter == gremio){
            cont_empate++;
        }else if(inter > gremio){
            cont_inter++;
        }else{
            cont_gremio++;
        }

        do{
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> x;
        }while(x < 1 || x > 2);

    }while(x == 1);

    cout << cont_grenais << " grenais" << endl;
    cout << "Inter:" << cont_inter << endl;
    cout << "Gremio:" << cont_gremio << endl;
    cout << "Empates:" << cont_empate << endl;
    if(cont_inter == cont_gremio){
        cout << "Nao houve vencedor" << endl;
    }else if(cont_inter > cont_gremio){
        cout << "Inter venceu mais" << endl;
    }else{
        cout << "Gremio venceu mais" << endl;
    }
    return 0;
}



