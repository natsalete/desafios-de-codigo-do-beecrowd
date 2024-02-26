#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int t, dif = 0;
    while(n--){
        cin >> t;
        dif = 2015 - t;
        if(dif <= 0){
            cout << abs(dif) + 1 << " A.C." << endl;
        }else {
            cout << dif << " D.C." << endl;
        }
    }
  return 0;
}
