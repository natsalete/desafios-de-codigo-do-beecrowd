#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){

    int led = 0;
    string valor;

    cin >> valor;

    for(int j = 0; j < valor.size(); j++) {
        if(valor[j] == '1'){
            led += 2;
            
        }else if(valor[j] == '2' || valor[j] == '3' || valor[j] == '5'){
            led += 5;
             
        }else if(valor[j] == '4'){
            led += 4;
            
        }else if(valor[j] == '6'){
            led += 6;
            
        }else if(valor[j] == '7'){
            led += 3;
             
        }else if(valor[j] == '8'){
            led += 7;
             
        }else if(valor[j] == '9' || valor[j] == '0'){
            led += 6;
             
        }
    }
    cout << led << " " << "leds" << endl;
   }




    return 0;
}

