#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2, v1, r1, r2;

    while (cin >> x1 >> y1 >> x2 >> y2 >> v1 >> r1 >> r2){
        double distancia = sqrt((pow ((x2 - x1), 2)) +(pow((y2 - y1), 2))) + (v1 * 1.5);
        double distancia_maxima = r1 + r2;

        if(distancia <= distancia_maxima){
            cout << "Y" << endl;
        }else {
            cout << "N" << endl;
        }
    }

    return 0;
}
