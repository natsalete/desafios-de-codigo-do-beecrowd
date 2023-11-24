#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
     for(int i = 0; i < n-2; i++){
        v[i] = 0;
     }
     v[0] = 1;
     v[1] = 1;
     for(int i = 2; i < n; i++){
       v[i] = v[i-1] + v[i-2];
     }

     for(int i = n -1; i >= 1; i--){
      cout << v[i] << " ";
     }

    cout << v[0] << endl;

    return 0;
}
