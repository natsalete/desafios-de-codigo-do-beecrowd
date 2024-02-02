#include <iostream>

using namespace std;

int main(){
    int x;
    while(cin >> x && x != 0){
        for(int i = 1; i < x; i++){
            cout << i << " ";
        }

        cout << x << endl;
    }
    return 0;
}

