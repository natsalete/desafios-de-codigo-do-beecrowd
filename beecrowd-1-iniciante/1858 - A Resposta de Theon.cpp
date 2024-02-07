#include <iostream>

using namespace std;

int main () {
    int n;

    cin >> n;

    int v[n];

    int menor = 101, pos;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < menor){
            menor = v[i];
            pos = i;
        }
    }

    cout << pos+1 << endl;

	return 0;
}



