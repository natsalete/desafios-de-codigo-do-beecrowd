#include <iostream>


using namespace std;

int main(){
    int n = 6, cont = 0;
    float soma = 0;

    while(n--){
       float  x;

        cin >> x;
         if (x > 0){
            soma += x;
            cont++;
         }
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << cont << " valores positivos" << endl;
    cout << soma/cont << endl;

    return 0;
}
