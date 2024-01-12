#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n--){
        string sentenca;
        int x;
        cin >> sentenca;
        cin >> x;
        for(int i = 0; i < sentenca.size(); i++){
            sentenca[i] -= x;
            if(sentenca[i] < 65){
                int valor = 65 - sentenca[i];
                sentenca[i] = 90 - (valor-1);
            }
        }

        cout << sentenca << endl;
    }
    return 0;
}
