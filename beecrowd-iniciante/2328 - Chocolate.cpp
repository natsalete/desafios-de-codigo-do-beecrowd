#include <iostream>

using namespace std;

int main() {
    int x, n, soma;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> n;
        soma += n - 1;
    }
    cout << soma << endl;
    return 0;
}
