#include <iostream>


using namespace std;

int main(){
    int n = 6, cont = 0;


    while(n--){
       float x;

        cin >> x;

         if (x > 0){
            cont++;
         }
    }

    cout << cont << " valores positivos" << endl;

    return 0;
}
