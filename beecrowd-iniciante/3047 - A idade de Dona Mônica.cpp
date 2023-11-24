#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b;
    c =  n - (a + b);
    if (a > b && a > c){
        cout << a << endl;
    }else if(b > a && b > c){
        cout << b << endl;
    }else {
        cout << c << endl;
    }

    return 0;
}
