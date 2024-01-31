#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float n;

    cin >> n;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(n >= 0.00 && n <= 2000.00){

        cout << "Isento" << endl;

    }else if(n >= 2000.01 && n <= 3000.00){

       float valor = (((n - 2000.00) * 8)/ 100);
        cout << "R$ " << valor << endl;

    }else if(n >= 3000.01 && n <= 4500.00){

        float valor = (((n - 3000.00) * 18)/ 100) + 80.00;
        cout << "R$ " << valor << endl;

    }else if(n > 4500.00){

        float valor = (((n - 4500.00) * 28)/ 100) + 350.00;
        cout << "R$ " << valor << endl;
    }

  return 0;
}


