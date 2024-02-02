#include <iostream>

using namespace std;

int main(){
    int x, y;

    cin >> x >> y;

    int cont = 0;
    for(int i = 1; i <= y; i++){
       cont ++;
       if(cont == x){
            cout << i << endl;
            cont = 0;
       }else{
            cout << i << " ";
       }
    }

    return 0;
}
