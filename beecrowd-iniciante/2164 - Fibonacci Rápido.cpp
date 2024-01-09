#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    double fib;

    cin >> n;

    cout.precision(1);
    cout.setf(ios::fixed);

    fib = (pow(((1 + sqrt(5))/ 2), n) - pow(((1 - sqrt(5))/ 2), n)) / sqrt(5);

    cout << fib << endl;

}


