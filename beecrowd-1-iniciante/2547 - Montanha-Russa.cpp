#include <iostream>

using namespace std;

int main(){
    int n, Amin, Amax;

    while(cin >> n >> Amin >> Amax){
        int cont = 0;
        while(n--){
            int alt;

            cin >> alt;

            if(alt >= Amin && alt <= Amax){
                cont++;
            }
        }

        cout << cont << endl;
    }



    return 0;
}
