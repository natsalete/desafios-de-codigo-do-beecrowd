#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int m;

    cin >> m;

    int v[m];
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }

    for(int i = 0; i < m-1; i++){
        for(int j = i+1; j < m; j++){
            if(v[i] == v[j]){
                v[j] = 0;
            }
        }
    }

    int cont = 0;
    for(int i = 0; i < m; i++){
       if(v[i] != 0){
            cont++;
       }
    }

    cout << n - cont << endl;

    return 0;
}

