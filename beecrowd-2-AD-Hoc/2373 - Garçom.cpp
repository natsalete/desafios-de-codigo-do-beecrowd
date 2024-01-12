#include <iostream>

using namespace std;

int main (){
     int n, i = 0, a, b, cop = 0;
     cin >> n;
     while (i != n){
        cin >> a >> b;
        if (a > b){
            cop += b;
        }


        i += 1;
     }
    cout << cop << endl;


}