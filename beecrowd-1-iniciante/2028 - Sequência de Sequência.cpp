#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, cont1 = 0;

    while (cin >> n){
        vector <int> v;
        cont1++;

        cout << "Caso " << cont1 << ": ";

        int x, cont = 1;

        for(int i = 1; i <= n; i++){
            x = i;
            while(x--){
                v.push_back(i);
                cont++;
            }
        }

        if(cont == 1){
            cout << cont << " numero" << endl;
        }else {
            cout << cont << " numeros" << endl;
        }

        if(n == 0){
            cout << 0 << endl;
        }else {
            cout << 0 << " ";
        }

        for(int i = 0; i < v.size(); i++){
            if(i == (v.size()-1)){
                cout << v[i] << endl;
            }else {
                cout << v[i] << " ";
            }
        }

        cout << endl;

    }

    return 0;
}
