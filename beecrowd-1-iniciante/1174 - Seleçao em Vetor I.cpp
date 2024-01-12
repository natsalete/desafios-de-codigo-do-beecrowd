#include <iostream>

using namespace std;

int main(){
    double v[100];

    cout.precision(1);
    cout.setf(ios::fixed);

    for(int i = 0; i < 100; i++){
        cin >> v[i];
        if(v[i] <= 10){
            cout << "A[" << i << "] = " << v[i] << endl;
        }
    }

    return 0;
}
