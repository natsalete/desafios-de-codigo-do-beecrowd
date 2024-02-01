#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int x, y;

    cout.precision(1);
    cout.setf(ios::fixed);

    while(n--){
        cin >> x >> y;

        if(y == 0){
            cout << "divisao impossivel"<< endl;
        }else{
            double div = static_cast<double>(x)/y;
            cout << div << endl;
        }
    }

    return 0;
}

