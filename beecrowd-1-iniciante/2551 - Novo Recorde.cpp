#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        vector<double> velocidades(n);

        for(int i = 0; i < n; i++){
            double t, d;
            cin >> t >> d;
            velocidades[i] = d / t;
        }

        double maior = velocidades[0];
        cout << 1 << endl;

        for(int i = 1; i < n; i++){
            if(velocidades[i] > maior){
                maior = velocidades[i];
                cout << i+1 << endl;
            }
        }
    }

    return 0;
}
