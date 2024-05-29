#include <iostream>

using namespace std;

int main() {
   int t;

   while(cin >> t && t != 0){
        while(t--){
            int n;
            cin >> n;
            if((n - 2) % 2 == 0){
                cout << (n-2) * 2 + 2 << endl;
            }else {
                cout << (n-1) * 2 + 1 << endl;
            }
        }
   }
    return 0;
}

