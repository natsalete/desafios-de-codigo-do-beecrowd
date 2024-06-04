#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int n;

    cin >> n;

    double totalS = 0, totalB = 0, totalA = 0;
    double pontosS = 0, pontosB = 0, pontosA = 0;
    while(n--){
        string nome;
        int s, b, a, s1, b1, a1;

        cin >> nome;
        cin >> s >> b >> a;
        cin >> s1 >> b1 >> a1;

        totalS += s;
        totalB += b;
        totalA += a;
        pontosS += s1;
        pontosB += b1;
        pontosA += a1;
    }

    cout << fixed << setprecision(2) << "Pontos de Saque: " << (pontosS/totalS)*100 << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << (pontosB/totalB)*100 << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: " << (pontosA/totalA)*100 << " %." << endl;
    return 0;
}
