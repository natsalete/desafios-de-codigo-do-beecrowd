#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;

    cin >> n;

    double p, m;

    p = n / (log10(n)/log10(2.71828182845904523536028747135266249));
    m = 1.25506 * (n/(log10(n)/log10(2.71828182845904523536028747135266249)));

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << p << " " << m << endl;


    return 0;
}

