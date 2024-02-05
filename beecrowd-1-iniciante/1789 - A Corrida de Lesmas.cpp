#include <iostream>

using namespace std;

int main(){
    int l;

    while (cin >> l){
        int lesma, maior = 0;
        while(l--){
            cin >> lesma;
            if(lesma > maior){
                maior = lesma;
            }
        }
        
        if(maior < 10){
            cout << 1 << endl;
        }else if(maior >= 10 && maior < 20){
            cout << 2 << endl;
        }else  {
            cout << 3 << endl;
        }
    }



    return 0;
}






