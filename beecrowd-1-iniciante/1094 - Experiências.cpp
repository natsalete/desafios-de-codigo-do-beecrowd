#include <iostream>

using namespace std;

int main () {

    int n;

    cin >> n;

    int total = 0, coelho = 0, sapo = 0, rato = 0;

    while(n--){
        int q;
        char tipo;

        cin >> q >> tipo;

        if(tipo == 'C'){
            coelho += q;
        }else if(tipo == 'S'){
            sapo += q;
        }else {
            rato += q;
        }

        total += q;
    }

    double pC, pS, pR;

    pC = (coelho * 100.0)/ total;
    pS = (sapo * 100.0)/ total;
    pR = (rato * 100.0)/ total;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << "Percentual de coelhos: " << pC << " %" << endl;
    cout << "Percentual de ratos: " << pR << " %" << endl;
    cout << "Percentual de sapos: " << pS << " %" << endl;

    return 0;
}
