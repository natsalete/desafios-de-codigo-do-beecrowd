#include <iostream>
#include <vector>

using namespace std;

unsigned long long fib(int n) {
    vector<unsigned long long> fibSeries(n + 1, 0);
    fibSeries[0] = 0;
    if (n > 0) {
        fibSeries[1] = 1;
        for (int i = 2; i <= n; i++) {
            fibSeries[i] = fibSeries[i - 1] + fibSeries[i - 2];
        }
    }
    return fibSeries[n];
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        unsigned long long result = fib(N);
        cout << "Fib(" << N << ") = " << result << endl;
    }

    return 0;
}
