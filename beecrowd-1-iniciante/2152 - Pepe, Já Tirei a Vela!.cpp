#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n--){
        int h, m, o;

        cin >> h >> m >> o;

        if(o == 1 && h < 10 && m >= 10){
           cout << "0" << h << ":" << m << " - A porta abriu!" << endl;
        }else if(o == 1 && h >= 10 && m < 10){
            cout << h << ":" << "0" << m << " - A porta abriu!" << endl;
        }else if(o == 1 && h < 10 && m < 10){
            cout << "0" << h << ":" << "0" << m << " - A porta abriu!" << endl;
        }else if(o == 1 && h >= 10 && m >= 10){
            cout << h << ":" << m << " - A porta abriu!" << endl;
        }else if(o == 0 && h < 10 && m >= 10){
           cout << "0" << h << ":" << m << " - A porta fechou!" << endl;
        }else if(o == 0 && h >= 10 && m < 10){
            cout << h << ":" << "0" << m << " - A porta fechou!" << endl;
        }else if(o == 0 && h < 10 && m < 10){
            cout << "0" << h << ":" << "0" << m << " - A porta fechou!" << endl;
        }else {
            cout << h << ":" << m << " - A porta fechou!" << endl;
        }

    }

    return 0;
}
