#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n ;

    if(n > 0 && n <= 12){

        string meses[] = {"January", "February", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};

        cout << meses[n - 1] << endl;
    }
    return 0;
}

