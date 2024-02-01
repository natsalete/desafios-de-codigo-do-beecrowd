#include <iostream>

using namespace std;

int main() {
    double a, b;
    int x;

    do{
        do{
            cin >> a;
            if(a < 0 || a > 10){
                cout << "nota invalida" << endl;
            }
        }while(a < 0 || a > 10);

        do{
            cin >> b;
            if(b < 0 || b > 10){
                cout << "nota invalida" << endl;
            }
        }while(b < 0 || b > 10);

        double media = (a + b) / 2;

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << "media = " << media << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }while(x < 1 || x > 2);

    }while(x == 1);

    return 0;
}


