#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double h, p;

    cin >> h >> p;

    double media = h / p;

    cout  << fixed << setprecision(2) << media << endl;

    return 0;
}
