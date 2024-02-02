#include <iostream>

using namespace std;

int main() {
    double x;

    cin >> x;

    cout.precision(4);
    cout.setf(ios::fixed);

    double n[100];
    for(int i = 0; i < 100; i++){
        n[i] = x;
        cout << "N[" << i << "] = " << n[i] << endl;
        x /= 2;
    }




  return 0;
}

