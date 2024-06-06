#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool ordenacao(int a, int b){ 
    return a > b;
}


int main(){
    int n, q;

    while(cin >> n >> q){

        vector<int> notas(n);

        for(int i = 0; i < n; i++){

            cin >> notas[i];
        }

        sort(notas.begin(), notas.end(), ordenacao);

        while(q--){
            int x;

            cin >> x;

            for(int i = 0; i < n; i++){
                if(x == i+1){
                    cout << notas[i] << endl;
                }
            }
        }

    }

    return 0;
}

