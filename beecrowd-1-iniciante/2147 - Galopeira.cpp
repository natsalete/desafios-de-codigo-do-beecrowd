#include <iostream>

using namespace std;

int main() {
    int c;

    cin >> c;

    while(c--){
        string palavra;
        cin >> palavra;

        double tempo = palavra.size();

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << tempo/100 << endl;
    }

    return 0;
}
