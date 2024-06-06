#include <iostream>

using namespace std;

int main(){
    int n, i;

    while(cin >> n >> i){
        int cont = 0;
        while(n--){
            int id, j;

            cin >> id >> j;

            if(id == i && j == 0){
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
