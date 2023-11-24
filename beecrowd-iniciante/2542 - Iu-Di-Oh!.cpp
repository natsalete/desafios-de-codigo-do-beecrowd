#include <iostream>

using namespace std;

int main(){

    int n, m, l, cm, cl, a;
    while(cin >> n){

        cin >> m >> l;

        int mar[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> mar[i][j];
            }
        }

        int leo[l][n];
        for(int i = 0; i < l; i++){
            for(int j = 0; j < n; j++){
                cin >> leo[i][j];
            }
        }


        cin >> cm >> cl;
        cin >> a;
        
        int x = mar[cm-1][a-1];
        int y = leo[cl-1][a-1];

        if(x > y){
            cout << "Marcos" << endl;
        }else if (x == y){
            cout << "Empate" << endl;
        }else {
            cout << "Leonardo" << endl;
        }
    }

    return 0;
}
