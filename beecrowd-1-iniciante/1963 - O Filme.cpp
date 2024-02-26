#include <iostream>
using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    double valor = ((b - a) * 100) / a;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << valor << "%" << endl;

  return 0;
}

