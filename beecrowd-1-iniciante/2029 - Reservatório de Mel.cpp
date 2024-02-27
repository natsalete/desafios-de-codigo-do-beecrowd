#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double v, t;

    while(cin >> v >> t){

        double altura = v / (3.14 * pow(t/2, 2));
        double area = 3.14 * pow(t/2, 2);

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }
    return 0;
}
