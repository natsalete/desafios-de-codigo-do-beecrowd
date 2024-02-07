#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int a, b, q, r;

	cin >> a >> b;

	if (a < -1000) {
        return 0;
	}
	if (b > 1000) {
        return 0;
	}

	q = a / b;

	r = (a % b);

    if (r < 0) {
        double  q1, r1 = 0.0;
        r1 = r + sqrt(b * b);
        q1 = (a - r1) / b;
        cout << q1 << " " << r1 << endl;
    } else {
        cout << q << " " << r << endl;
    }

}
