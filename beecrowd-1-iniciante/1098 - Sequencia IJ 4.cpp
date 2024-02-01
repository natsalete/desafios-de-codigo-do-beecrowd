#include <iostream>

using namespace std;

int main() {

    double j1 = 1;
    double j2 = 2;
    double j3 = 3;

    for(double i = 0; i <= 2; i += 0.2){
        cout <<"I=" << i <<  " J=" << j1 << endl;
        cout <<"I=" << i <<  " J=" << j2 << endl;
        cout <<"I=" << i <<  " J=" << j3 << endl;
        j1 += 0.2; j2 += 0.2; j3 += 0.2;
    }



    return 0;
}












