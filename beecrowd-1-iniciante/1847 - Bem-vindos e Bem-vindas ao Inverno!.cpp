#include <iostream>

using namespace std;

int main () {
    int a , b, c;

    cin >> a >> b >> c;

    if(a > b && (b == c || b < c) || (a < b && b < c  && (c - b >= b - a)) || (a > b && b > c  && (b - c < a - b)) || (a == b && b < c)){
        cout << ":)" << endl;
    }else{
        cout << ":(" << endl;
    }


	return 0;
}

