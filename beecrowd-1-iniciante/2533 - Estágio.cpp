#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m;

    while(cin >> m){
        double IRA = 0;
        double somaCi = 0, somaCixNi = 0;
        while(m--){
            int Ci, Ni;
            cin >> Ni >> Ci;
            somaCixNi += (Ni * Ci);
            somaCi += Ci;
        }

        IRA = somaCixNi / (somaCi * 100);

        cout << fixed << setprecision(4) << IRA << endl;
    }
    return 0;
}
