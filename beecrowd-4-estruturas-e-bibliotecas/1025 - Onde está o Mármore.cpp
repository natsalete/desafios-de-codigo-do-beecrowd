#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, q, cont = 0;

    while(cin >> n >> q && n != 0 && q != 0){

        vector<int> v;

        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            v.push_back(x);
        }

        cont++;

        cout << "CASE# " << cont << ":" << endl;

        int y;

        sort(v.begin(), v.end());

        while(q--){
            bool verifica = false;
            cin >> y;

            for(int i = 0; i < v.size(); i++){
                if(v[i] == y){
                    cout << y << " found at " << i+1 << endl;
                    verifica = true;
                    break;
                }
            }

            if(!verifica){
                cout << y << " not found" << endl;
            }
        }
    }

    return 0;
}

