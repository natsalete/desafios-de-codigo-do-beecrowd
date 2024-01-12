#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int maxNum = 2000;
    int counts[maxNum + 1] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }

    for (int i = 1; i <= maxNum; i++) {
        if (counts[i] > 0) {
            cout << i << " aparece " << counts[i] << " vez(es)" << endl;
        }
    }

    return 0;
}
