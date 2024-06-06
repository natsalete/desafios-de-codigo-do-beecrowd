#include <iostream>

using namespace std;

int main(){
    string alfabeto;

    while(cin >> alfabeto){
        int n;

        cin >> n;

        while(n--){
            int x;
            cin >> x;

            for(int i = 0; i < alfabeto.size(); i++){
                if(x == i+1){
                    cout << alfabeto[i];
                }
            }
        }
        cout << endl;
    }

    return 0;
}
