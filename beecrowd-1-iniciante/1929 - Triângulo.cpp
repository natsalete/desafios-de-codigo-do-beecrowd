#include <iostream>

using namespace std;

int main () {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(((a + b > c) && (a + c > b) && (b + c > a)) || ((a + b > d) && (a + d > b) && (b + d > a)) || ((a + d > c) && (a + c > d) && (d + c > a)) || ((d + b > c) && (d + c > b) && (b + c > d))){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }


	return 0;
}

